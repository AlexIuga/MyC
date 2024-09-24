#include<stdio.h>
#define MAX 100

int valori(int array[], int dim){
  int i=0;
  int min,max;
  min=array[0];
  max=array[0];

  for(int j=1;j<dim;j++){
    if(array[j]>max)
      max=array[j];
    if(array[j]<min)
      min=array[j];
  }
  return (min+max);

}

int main(){
  int array[MAX];
  int dim,somma;

  printf("inserire la dimensione dell'array\n");
  scanf("%d", &dim);
  printf("inserire un array di dimensione %d \n",dim);
  for(int i=0;i<dim;i++){
    scanf("%d", &array[i]);
  }

  somma=valori(array,dim);
  printf("la somma del min e max è %d \n\n",somma);

  return 0;
}
