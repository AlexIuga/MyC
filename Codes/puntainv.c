//Scrivere un programma che chieda in input due numeri interi. Definire due
//puntatori, uno per ogni numero. Visualizzare a schermo i due numeri, invertire
//i puntatori e stampare nuovamente i due numeri.
#include<stdio.h>

int main(){
int x,y;
int *p1,*p2,*ptemp;
printf("inserire due valori \n");
scanf("%d",&x);
scanf("%d",&y);
p1=&x;
p2=&y;
//Visualizzare
printf("%d -- %d  \n",x,y);

 ptemp=p1;
 p1=p2;
 p2=ptemp;
 printf("%d -- %d  \n",x,y);

  return 0;
}
