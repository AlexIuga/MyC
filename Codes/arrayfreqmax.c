//Scrivere un programma che legga in ingresso un array di N numeri compresi
//tra 0 e 9 (con N scelto dall’utente e compreso tra 1 e 100)
//e stampi a video i numeri che compaiono nell’array con frequenza massima.

#include<stdio.h>
#define N 10

int leggiNumero(int a)
{
   do{
     printf("inserisci un numero tra 0 e 9\n");
     scanf("%d",&a);
   }while(a<0 || a>9);
   return a;
}

int main()
{
int array[N];
int dim, freq;
int conteggio[10];

  do{
    printf("inserisci la dimensione dell'array tra 0 e 100\n");
    scanf("%d",&dim);
  }while(dim<1 || dim>100);
//inserimento array
  for(int i=0;i<dim;i++){
    array[i]=leggiNumero(i);
  }
//contare la frequenza con un array
//inizializzare a zero
  for(i=0;i<10;i++){
    conteggio[i]=0;
  }
//conto le occorrenze
  for(i=0;i<dim;i++){
    conteggio[array[i]]++;
  }

freq=conteggio[0];
 for(i=1;i<10;i++){
   if(conteggio[i]>freq)
     freq=conteggio[i];
 }

 printf("I valori che compaiono con frequenza massima (%d volte) sono:\n", freq_max);
for(i = 0; i < 10; i++) {
    if(conteggio[i] == freq_max) {
        printf("%d ", i);
    }
}
printf("\n");


return 0;
}
