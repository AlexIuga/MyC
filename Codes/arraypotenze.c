//Scrivere in C una funzione che prende come parametro un intero i e restituisce un
//puntatore a intero, che corrisponde al primo elemento di un array di interi.
//Questo deve contenere le potenze di i: il primo valorecontenuto nell’array deve
//essere i0 e l’ultimo i(n−1).  La dimensione n dell’array`e definita attraverso un’opportuna
//istruzione #define. Scrivere  anche  un  programma  principale  d’esempio  per
//l’invocazione  della funzione con un valore scelto dall’utente.
#include<stdio.h>
#define DIM 5

int pot(int base,int esp){
  //caso base
  if(esp==0)
  return 1;
  //caso generale
  else{
    return base*pot(base,esp-1);
  }
}

int* potenza(int i){
  int static array[DIM];
  int *p;
  p=&array[DIM];

  for(int j=0;j<DIM;j++){
    array[j]=pot(i,j);
  }
  return array;
}


int main(){
  int x;
  int *p;

  printf("inserire un valore \n");
  scanf("%d",&x);

  p=potenza(x);

  for(int i=0;i<DIM;i++){
    printf("%d ",p[i]);
  }
  printf("\n");

  return 0;
}
