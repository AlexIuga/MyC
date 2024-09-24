//programma che chiede all'utente di inserire due numeri e un'operazione

#include<stdio.h>

int main()
{
int a,b,n;
char o;

  printf("inserire due numeri \n");
  scanf("%d", &a);
  scanf("%d", &b);

  printf("inserire un'operazione tra somma s e prodotto p \n");
  scanf("%c", &operazione);

 if(operazione==s)
   n=a+b;

 else if(operazione==p)
   n=a*b;

 else
   printf("l'utente non ha inserito un'operazione corretta\n");


 printf("il risultato è %d", n);

return 0;
}
