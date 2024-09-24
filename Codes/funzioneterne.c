//Scrivere un programma che dato un numero intero positivo n stampi
//a video tutte le terne di numeri interi positivi a, b e c tali che:

//   (a*a) +(b*b) =(c*c)
//    1<=a,b<=n

#include<stdio.h>

int terne_pitagoriche(int n);

int main()
{
int a,b,c,n;

printf("inserire un numero positivo");
scanf("%d", &n);

for(a=1;a<=n;a++){
  for(b=1;b<=n;b++){
    for(c=1;c<=2*n;c++){
      if(terne_pitagoriche(a,b,c)){
         printf("%d %d %d",a,b,c);
         printf("\n");
       }
     }
  }
}

return 0;
}

int terne_pitagoriche(int a, int b, int c)
{
  return (a*a)+(b*b)=(c*c);
}
