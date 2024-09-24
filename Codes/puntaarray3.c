//Scrivere un programma che chieda in input N numeri interi (con N definito
//dall’utente minore o uguale a 100). Memorizzare i numeri in un vettore, poi
//visualizzare a schermo i numeri inseriti senza fare uso dell’operatore [].

#include<stdio.h>
#define MAX 100

int main(){
  int dim,*pa;
  int array[MAX];
  pa=&array[MAX];

  printf("inserire la lunghezza del vettore \n");
  scanf("%d",&dim);
  printf("inserire il vettore \n");
  for(int i=0;i<dim;i++){
    scanf("%d",(pa+i));
  }

  for(int i=0;i<dim;i++){
    printf("%d->",*(pa+i));
  }
  printf("\n");

  return 0;
}
