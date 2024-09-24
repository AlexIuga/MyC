//Scrivere in C una funzione void fun(FILE *f1, FILE *f2)che prende come parametri
//due puntatori a file.f1`e un (puntatore a un file di interi e contiene una
//sequenza di coppie di valori v1 e v2:v1 rappresenta la codifica ASCII del carattere
//da scrivere in f2 e v2 il numero di volte che l’operazione deve essere ripetuta,
//ovvero quanti caratteriv1devono essere scritti inf2.  Le diverse sequenze di
//v2 caratteri v1 devono essere separate tra loro da uno spazio
#include <stdio.h>

void fun(FILE *f1, FILE *f2){
  int v[1];
  char c;

  rewind(f1);
  rewind(f2);

  while(feof(f1)!=0){
    fread(v,sizeof(int),2,f1);    ///2 perchè legge 2 interi? o uno?
                               //posso??
    for(int i=0;i<v[1];i++){
      fputc(v[0],f2);
    }
    fputc(' ',f2);
  }
}
