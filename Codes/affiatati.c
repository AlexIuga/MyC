//numeri affiatati somma=prodotto delle cifre

#include<stdio.h>
#include<string.h>

int affiatati(int a, int b){
  int c1,c2;
  int d1,d2;
  int prodotto,prodotto2;
  //cifre
  if(a<10)
  prodotto=a;
  if(a>10){
  c1=a/10;
  c2=a%10;
  prodotto=c1*c2;
  }

  if(b<10)
  prodotto2=b;
  if(b>10){
    d1=b/10;
    d2=b%10;
   prodotto2=d1*d2;
  }

  return(a+b==prodotto*prodotto2);
}

void stampaffiatati(void)
{
  int i,j;
  for( i=0;i<100;i++){
    for( j=0;j<100;j++){
      if(affiatati(i,j)==1)
      printf("%d - %d \n",i,j);
    }
  }
}

int main(){
  int a,b, ris;
  a=14;
  b=34;
  ris=affiatati(a,b);
  if(ris==1)
    printf("i due numeri sono affiatati \n\n");
  else
   printf("non sono affiatati \n\n");

   stampaffiatati();
}
