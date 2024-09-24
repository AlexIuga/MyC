//Scrivere una funzione in C che prende in ingresso un puntatore a file e
//restituisce un altro puntatore a file.Il primo file contiene un insieme di
//parole di lunghezza variabile e separate da uno o pi`u spazi.  Il secondo file
//deve essere scritto dalla funzione e deve contenere la lunghezza delle diverse
//parole lette. L’ultimo valore scritto deve essere 0.
#include<stdio.h>
#include<string.h>
#define MAX 100

FILE *lughezza(FILE *in){
  FILE *out;
  char stringa[];
  int dim,controllo;
  //aprire il file
  out=fopen("fileout","wb+");
  if(out==NULL)
  return;
  //scrivere 0 nel fileout
  if(fwrite(0,sizeof(int),1,out)<0)
    return;
  //leggere stringhe file in, e scrilere strlen(s) nel file out
  while(feof(in)!=0){
    if(fgets(stringa,MAX,in)!=NULL){
      dim=strlen(stringa);
      controllo=fwrite(dim,sizeof(int),1,out);
      if(controllo<0)
        break;
    }
    //scrivere il carattere 0 nel file fileout
    if(fwrite(0,sizeof(int),1,out)<0)
      return;
  }
  return out;
}
