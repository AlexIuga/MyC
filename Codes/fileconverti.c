//Scrivere in C una funzione che prende come parametro in ingresso un file di numeri
//interi e restituisce un altro file composto da caratteri. La funzione deve trasformare
//il numero intero letto nella sequenza di caratteri corrispondente (ad esempio,
//il numero 10 dovrebbe essere trasformato nei caratteri 1 e 0), lasciando uno spazio
//vuoto tra la codifica di un numero e la successiva, e scriverla nel file restituito dalla funzione.

#include<stdio.h>
#include<string.h>
#define MAX 30

FILE *converti(FILE *fb){
  FILE *fc;
  int n[30],x,i=0;
  char c;
  fc=fopen("fileout","w+");
  //assicurarsi che il file sia puntato
  if(fc==NULL)
    return NULL;

  while(fread(&x,sizeof(int),1,fb)>0){
     if(x<0){
       n=-n;
       fprintf(fb,"-");
     }

   while(x>0){
     n[i]=x%10;
     x=x/10;
     i++
   }
   while(i>0){
     fprintf(fb, "%c", n[i]+48);
     i--;
   }
   fprintf(fb, " ");
 }
}
