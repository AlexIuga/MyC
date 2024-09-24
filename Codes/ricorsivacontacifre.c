#include<stdio.h>

int contaRicorsiva(int n)
{
//caso base 1 cifra
  if(n<10)
    return 1;
  else
   return contaRicorsiva(n/10)+1;

}

int main(){

int n, cifre;

printf("inserire un numero intero \n");
scanf("%d",&n);

cifre=contaRicorsiva(n);

printf("le cifre di %d dono %d \n\n",n, cifre);


return 0;
}
