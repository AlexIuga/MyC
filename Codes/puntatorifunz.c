//scrivere una funzione che ricevuto in ingresso un array a di interi,
//e un valore c da cercare, ritorna un puntatore alla prima posizione
// dell'array contenente il valore c, oppure NULL se non è presente.

#include <stdio.h>
#define MAX 100

int* cerca(int a[], int dim, int c);            // oppure *a -> indirizzo dell'array

int main(){
  int array[MAX];
  int x,dim,i,*puntatore;

  printf("inserire la dimensione dell'array \n");
  scanf("%d",&dim);
  printf("inserire un array di interi \n\n");
  for(i=0;i<dim;i++){
    scanf("%d"&array[i]);
  }
  printf("inserire il numero da cercare \n");
  scanf("%d",&x);

  puntatore=cerca(array,dim,x);

if(puntatore==NULL)
  printf("l'elemento non è stato trovato \n\n");
else
  printf("l'elemento è alla posizione %ld\n\n",puntatore-array);


  return 0;
}

int* cerca(int a[], int dim, int c){
  int
  for(i=0;i<dim;i++){
    if(a[i]==c){
      return a+i;                     // a+i = indirizzo del puntatore oppure &a[i]
    }
  }
   return NULL;
}
