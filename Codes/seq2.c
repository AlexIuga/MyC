#include<stdio.h>

int main()
{
int n,somma;
somma=0;

printf("inserire una sequenza terminata da 0 \n");

  do{
  scanf("%d",&n);
  if(n==0)
   break;

  if(n<0)
  somma=somma+n;

  }while(n);

printf("la somma dei negativi è %d \n", somma);

return 0;
}
