#include<stdio.h>
#include<stdlib.h>
#define N 100

void somma(int n)
{
  int i,j,a=0;
  int matrix[N][2];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j+i==n){
        matrix[a][1]=i;
        matrix[a][2]=j;
        a++;
      }
    }
  }

  for(int i=0;i<N;i++){
    for(int j=0;j<2;j++){
      printf("%d ",matrix[i][j]);
      printf("/n");
    }
  }

}

int main()
{
  int n=8;
  int matrice[N][2];

  somma(n);
}
