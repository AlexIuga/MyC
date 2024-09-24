//array invertiti

#include<stdio.h>
#define DIM 30

int main()
{
int array[DIM];
int inverso[DIM];
int i,dim;

printf("inserire un array \n");

  do{                                 //lettura array
     scanf("%d",array[i]);
     i++;
  }while(i<DIM && array[i-1]>0);

dim=i-1;

   for(i=0;i<dim-1;i++){             //invertire sequenza
     inverso[dim-1]=array[i];
   }

for(i=0;i<dim-1;i++){
  printf("%d",inverso[i]);
  printf("\n");
}

return 0;
}
