#include<stdio.h>

int main()
{
int n,i,a,somma;
somma=0;


printf("inserire la lunghezza della lista \n");
scanf("%d",&n);

printf("inserire %d numeri \n",n);
  for(i=0;i<n;i++){
  scanf("%d",&a);
  somma=somma+a;
  }
printf("la somma è %d\n", somma);

return 0;
}
