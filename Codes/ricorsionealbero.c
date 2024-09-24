//problema 3 ricorsione

#include <stdio.h>
void albero(char a[]);

int main(){

int M;
  printf("inserire la grandezza dell'albero (>0)");
  scanf("%d",&M);


return 0;
}

char albero(int M){

  if(M=1)
    return printf("+");

  if(M=2)
    return printf("+|+");

  else{
    char Xmas[(M-2)];
    char c='-';
    for(i=0;i<M-2;i++)
       Xmas[i]=c;
  ;
  }
}
