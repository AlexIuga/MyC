//scrivere un programma che legga una sequenza di 10 float e poi stampi
//in ordine dal più piccolo al più grande.
//BUBBLE SORT

#include<stdio.h>
#define N 10

void swap(float *px, float *py)
{
  float temp;
  temp= *px;
  *px=*py;
  *py=temp;
}

int main(){

float array[N];
float i,j;

printf("inserire una sequenza di 10 numeri \n");
 for(i=0,i<N;i++){
    scanf("%f", array[i]);
  }

//BUBBLE SORT
  for(i=N-1;i>=1;i--){
    for(j=0;j<i;j++){
       if(array[j]>array[j+1]){
        swap(&array[j],&array[j+1]);
      }
    }
}


/*for(i=0;i<N;i++){

  if(array[i]>array[i+1])
    swap(&array[i],&array[i+1]);

  } */
  for(i=0;i<N;i++)
  printf("%f\n", array[i]);

return 0;
}
