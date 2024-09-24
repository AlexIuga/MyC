//Scrivere in C una funzione che prende come parametri un array,  di dimensione
//variabile,  e restituisce lasomma  dei valori  memorizzati nelle  posizioni di
//indice  dispari dell’array.   Scrivere  anche un  programmaprincipale d’esempio
//per l’invocazione della funzione definendo un array di almeno 5 elementi.

#include<stdio.h>
#define DIM 30

int sommaDispari(int array[]){
  int dim=0,i,somma=0;
  while(array[dim]!='\0'){
    dim++;
  };
  for(i=0;i<dim;i++){
    if(i%2==1){
      somma=somma+array[i];
    }
  }
  return somma;
}

int main(){
  int a[DIM]={2,35,7,9,10};
  int somma;
     //somma dispari=>  4+9=13

  somma=sommaDispari(a);
  printf("la somma dei dispari è %d \n",somma);
  return 0;
}
