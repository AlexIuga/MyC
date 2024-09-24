// array palindromo

#include<stdio.h>
#define DIM 30


int main()
{
char stringa[DIM];     //inizializzazione stringhe
int i,dim;

printf("inserire una stringa \n");
scanf("%s",stringa);       // "%[^\n]" per stringhe con spazi

//dimensione stringa
    for(i=0;i<DIM;i++){
       if(stringa[i]=='\n'){
         dim=i;
         break;
       }
    }

int palindroma=1;
    for(i=0;i<dim;i++){
       if(stringa[i]!=stringa[dim-1-i])
          palindroma=0;
    }

  if(palindroma==1)
     printf("la stringa %s è palindroma \n", stringa);
  else if(palindroma==0);
    printf("la stringa %s non è palindroma", stringa);

return 0;
}
