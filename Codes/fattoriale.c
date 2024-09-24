#include<stdio.h>

int main()
{
unsigned int fattoriale,i,n;
fattoriale=1;
printf("inserire un numero \n");
scanf("%u",&n);

  for(i=n;i>0;i--){
    fattoriale *=i;

  }

printf("il fattoriale è %u \n", fattoriale);
  return 0;
}
