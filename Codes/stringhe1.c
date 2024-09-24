/*Scrivere un programma che chiede all'utente di inserire delle stringhe
 (senza spazi e di lunghezza al max 100). Il programma termina non appena
 l'utente inserisce la stringa "stop", stampando il numero di stringhe inserite
 dall'utente di lunghezza l (dove l è a sua volta inserito dall'utente
 all'inizio del programma). */


#include<stdio.h>
#include<string.h>
#define DIM 100

int main()
{
char s[DIM];
int l, cont=0,lungh;

printf("inserire la lunghezza delle stringhe da contare \n");
scanf("%d",&l);

printf("inserire sequenza di stringhe terminata da stop \n");
  do{
    scanf("%s",s);
    if(strlen(s)==l)
      cont++;
  }while(s[0]!='s' || s[1]!='t' || s[2]!='o' || s[3]!='p');

printf("il numero di stringhe di lunghezza richiesta è %d \n", cont);

return 0;
}
