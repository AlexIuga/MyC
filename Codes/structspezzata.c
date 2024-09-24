/*Definire un tipo di dato in grado di rappresentare le coordinate di un punto
nel piano cartesiano ed un tipo di dato adatto a rappresentare una spezzata formata
da (al massimo) 50 punti nel piano cartesiano. Scrivere quindi un programma che
acquisisca da tastiera la sequenza di punti che formano una spezzata
(chiedendo all'utente anche quanti punti vuole inserire). Infine, calcolare la
lunghezza della spezzata e stampare il risultato a video. */


#include<stdio.h>
#include<math.h>

typedef struct{
  float x;
  float y;
}punto;

typedef struct{
  punto seq[50];
  int npunti;
}spezzata;


int main{
  spezzata s;
  int lunghezza=0;

  printf("inserire il numero di punti \n");
  scanf("%f", &s.npunti);

 for(int i=1; i<s.npunti; i++)
{
  lunghezza=lunghezza+sqrt((s.seq[i-1].x - s.seq[i].x)*(s.seq[i-1].x - s.seq[i].x) + (s.seq[i-1].y - s.seq[i].y)*(s.seq[i-1].y - s.seq[i].y));
}
  printf("la lunghezza è %f \n", lunghezza);

return 0;
}
