//Scrivere una funzione in C che prende in ingresso un puntatore a file e
//restituisce un altro puntatore a file.Il primo file contiene un insieme di
//parole di lunghezza variabile e separate da uno o pi`u spazi.  Il secondo file
//deve essere scritto dalla funzione e deve contenere la lunghezza delle diverse
//parole lette. L’ultimo valore scritto deve essere 0.

#include<stdio.h>

FILE *lunghezza(FILE *in){
  FILE *out;
  int conta=0,n;
  char c;
  //apertura
  out=fopen("fileout", "wb+");
  if(out==NULL)
   return;
   //
   if(fwrite(0,sizeof(int),1,out)<0)
     return;
   //leggo carattere per carattere fino a ' ', ogni carattere incremento conta
 while((c=fgetc(in))!=EOF){

     if(c!=' ')
       conta++;

  else{
    if(i>0){
      fwrite(conta,sizeof(int),1,out);
      conta=0;
    }
   }
  }
  if(fwrite(0,sizeof(int),1,out)<0)
    return;
    
  return out;
}
