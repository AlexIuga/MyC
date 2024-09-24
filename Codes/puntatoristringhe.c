//scrivere un programma che chieda in input N numeri interi (con N minore o uguale a 100)
//memorizzare i numeri in un vettore, e visualizzarli a schermo seza far uso di []

#include<stdio.h>
#define N 100

int main()
{
int array[N];
int dim,i;

printf("inserire un numero di elementi massimo di %d\n\n",N);
scanf("%d",&dim);

for(i=0;i<dim;i++){
scanf("%d",a+i);
}
for(i=0;i<dim;i++){
  printf("%d",*(a+i));
  printf("\n");
}


return 0;
}
