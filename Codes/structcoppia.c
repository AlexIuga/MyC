#include<stdio.h>
#include<stdlib.h>
#define N 100

typedef struct{
  int x;
  int y;
}coppia;

coppia *somma(int n)
{
  int i,j;
  coppia *p=malloc(sizeof(coppia)*n/2);

    for(i=0;i<n/2;i++){
        p[i].x=1+i;
        p[i].y=n-1-i;
    }

  return p;
}

int main()
{
  int i,n=11;
  coppia *p;

  p=somma(n);

  for(i=0;i<n/2;i++){
    printf(" %d " , p[i].x);
    printf(" %d " , p[i].y);
    printf("\n");
  }
  printf("\n");

  return 0;
}
