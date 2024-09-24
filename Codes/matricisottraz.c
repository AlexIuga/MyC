#include<stdio.h>
#define dim 20


int main()
{
int A[dim][dim];
int B[dim][dim];
int C[dim][dim];
int i,j;
int N, M;

printf("inserire il numero di righe di A e B \n");
scanf("%d", &N);
printf("inserire il numero di colonne di A e B\n");
scanf("%d", &M);

printf("inserire i valori della matrice A: \n");
//A
   for(i=0;i<N;i++){
      for(j=0;j<M;j++){
         scanf("%d",&A[i][j]);
       }
   }
printf("la matrice A è \n");
   for(i=0;i<N;i++){
      for(j=0;j<M;j++){
         printf("%d",A[i][j]);
       }
     printf("\n");
   }


printf("inserire i valori della matrice B \n");
//B
   for(i=0;i<N;i++){
      for(j=0;j<M;j++){
         scanf("%d",&B[i][j]);
      }
   }

   printf("la matrice B è \n");
   for(i=0;i<N;i++){
      for(j=0;j<M;j++){
         printf("%d",B[i][j]);
       }
      printf("\n");
   }

//sottrazione
  for(i=0;i<N;i++){
      for(j=0;j<M;j++){
         C[i][j]=A[i][j]-B[i][j];
      }
  }

  printf("la sottrazione è \n");
  for(i=0;i<N;i++){
     for(j=0;j<M;j++){
        printf("%d   ",C[i][j]);
     }
    printf("\n");
  }

  return 0;
}
