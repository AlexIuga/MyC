#include <stdio.h>

int min(int a, int b);             //funzioni
int max(int a, int b);


int main()
{
int x, MAX=0, MIN=0,i=0;

 printf("inserire una sequenza di numeri terminata da 0\n\n");

  do{
   scanf("%d",&x);
   if(x==0)
     break;
    i++;

   if(i>1){
     MIN= min(x,MIN);
     MAX= max(x,MAX);
   }
  else if(i=1){
   MIN=x;
   MAX=x;
   }
 }while(1);

  printf("il minimo è %d\n\n",MIN);
  printf("il massimo è %d\n\n",MAX);

return 0;
}

int min(int a, int b){                //funzioni
  if(a<b)
    return a;
  if(a>b)
    return b;
}

int max(int a, int b){
  if(a>b)
    return a;
  if(a<b)
    return b;
}
