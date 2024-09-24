// funzione stampa_distinti riceve una stringa nomefile e un numero n
//la funzione deve aprire il file e stampare i primi n caratteri (distinti) separati
//da uno spazio


#include<stdio.h>

void stampa_distinti(char nomefile[], int n)
{
  FILE *f;
  int distinti=0;
  int trovato[256];            //array dei caratteri

  f = fopen(nomefile,"r");

  if(f==NULL)
    return;
//array inizializzato a zero
      for(i=0;i<256;i++){
        trovato[i]=0;
      }

  while(distinti<n && feof(f)!=0)
  {
   if(fscanf(f,"%c", &c)=1 && trovato[c]==0){
    printf("%c ",c);
    distinti ++;
    trovato[c]=1;
    }
  }

}
