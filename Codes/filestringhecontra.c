//Si scriva una funzione in C che legge da un file, passato come parametro, un insieme di stringhe,
// di lunghezza variabile e terminate da \0, e le scrive a schermo al contrario,
//ovvero da destra verso sinistra. Ogni stringa`e lunga non pi`u di 30 caratteri;
//il file`e terminato dal carattere speciale EOF.

#include<stdio.h>
#include<string.h>
#define MAX 30

void strampa_contra(char nomefile[]){
 FILE *f;
 char s[MAX];
//apertura file
 f=fopen(nomefile,"r");
  if(f==NULL)
   return ;

while(f!=EOF){
   if(fgets(s, 31, f)!=NULL){
     for(int i=30;i>0;i--){
       printf("%c",stringa[i]);
     }
     printf("\n");
   }
 }
}
