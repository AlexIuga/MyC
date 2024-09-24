//Scrivere un programma che legga in ingresso una stringa e stampi
//se questa è palindroma (ovvero se letta da sx a dx e da dx a sx il risultato non cambia), o viceversa.

#include<stdio.h>
#include<string.h>
#define DIM 100

int main()
{
char stringa[DIM];
int dim, palindroma;
palindroma=1;

printf("inserire una parola \n");
scanf("%s",stringa);

dim=strlen(stringa);

  for(int i=0;i<dim ;i++){
    if(stringa[i]!=stringa[dim-1-i])
      palindroma=0;
  }

  if(palindroma==1)
    printf("la parola %s è palindroma\n",stringa);
  else if(palindroma==0)
    printf("la parola %s non è palindroma \n",stringa);

return 0;
}
