#include<stdio.h>
#include<string.h>
#define DIM 100

int main()
{
char stringa[DIM];
int i=0,l;

printf("impostare la lunghezza delle stringhe \n ");
scanf("%d",&l);


printf("inserire una sequenza di stringhe terminata dalla stringa stop \n");

do{
scanf("%s",stringa);
if(stringa[0]=='s' && stringa[1]=='t' && stringa[2]=='o' && stringa[3]=='p')
   break;

if(strlen(stringa)==l){
i++;
}
}while(1);


printf("le stringhe di dimensione %d sono %d \n",l,i);

return 0;
}
