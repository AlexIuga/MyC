//scrivere un programma che chieda in input due numeri interi. Definire due puntatori
//uno per ogni numero. Visualizzare a schermo i due numeri, invertire i puntatori
//e stampare nuovamente i numeri

#include<stdio.h>

int main()
{
int a,b,i;
int *p1, *p2, *temp;
printf("inserire due numeri interi\n");
scanf("&d""%d",&a,&b);

printf("i due numeri sono %d e %d\n",a,b);

p1=&a;
p2=&b;

temp=p1;
p1=p2;
p2=temp;

printf("i due numeri sono %d e %d\n",a,b);

return 0;
}
