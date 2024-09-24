//Scrivere in C una funzione che legge un file di numeri interi e restituisce un
//nuovo file (numeriPari). Questo deve contenere i soli numeri pari letti, ma memorizzati
//in ordine inverso.  Ad esempio, se il file originariocontenesse:1,2,3,4,5,6,7,8,
//il nuovo file dovrebbe contenere:8,6,4,2.  Il parametro della funzione e il valore
//restituito non devono essere nomi di file, ma i file stessi.

#include<stdio.h>
#define MAX 100

FILE *inverti_pari(FILE *f1)
{
  FILE *f2;
  int array[MAX];
  int i=0,dim,j;

  f2=fopen("numeriPari","wb");

  while(feof(f1)!=0){
    fread(&array[i],sizeof(int),1,f1);
    i++;
  }
 dim=i;

 for(j=dim;j>0;j--){
   if(array[j]/2==0){
     fwrite(&array[j],sizeof(int),1,f2);
   }
 }
 return f2;
}
