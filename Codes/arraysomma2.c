//Scrivere in C una funzione valori che legge una array di interi (di dimensione variabile)
//e restituisce la somma dei valori pi`u piccolo e pi`u grande contenuti nell’array.
//Scrivere anche un programma principale d’esempio per l’invocazione della funzione

#include<stdio.h>
#define DIM 8

int somma(int array[],int dim);

int main(){
 int array[DIM]={6,4,7,9,3,16,9,1};
 int som;
 som=somma(array,DIM);

 printf("\nla somma del min e del max è \n\n  %d \n\n",som);
  return 0;
}

int somma(int array[],int dim){
  int min,max;
   if(dim==0)
   return 0;
   if(dim==1)
   return array[0];

  min=max=array[0];

  for(int j=0;j<dim;j++){
    if(min<array[j])
      min=array[j];
    else if (max>array[j])
      max=array[j];
  }
  return min+max;
}
