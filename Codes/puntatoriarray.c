#include <stdio.h>
#define MAX 100

int main(){

int v[MAX],i,l=0,n;

scanf("inserire una sequenza di interi terminata da zero \n");

do{
scanf("%d", v+l);                 //posizione v+1
l++
}while(*(v+l-1)!=0 && l<100);     //contenuto della posizione v+l-1

printf("inserire un numero \n")
scanf("%d",&n);

for(i=0;i<l;i++){
  if(*(v+i)>n)
    printf("%d\n", v+i);
}




return 0;
}
