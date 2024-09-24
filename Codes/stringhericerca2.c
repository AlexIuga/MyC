//Scrivere una funzione che riceve una stringa chiamata “testo"
//e una stringa chiamata "ricercata" (max 200 caratteri).
//Poi verifichi se "ricercata" compare in "testo" e ritorna
//la posizione della prima
//occorrenza se la trova almeno una volta o -1 viceversa.

#include<stdio.h>
#include <string.h>
#define MAXDIM 200
#define MAX 10

int ricerca(char testo, char ricercata);

int main(){
  char ricercata[MAX];
  char testo[MAXDIM];
  int trovata;

  printf("inserire un testo di massimo 200 caratteri\n");
  scanf("%[^\n]",testo);

  printf("inserire la parola da cercare nel testo\n");
  scanf("%s",testo);

  trovata=ricerca(testo,ricercata);

  printf("la parola è stata trovata in posizione %d \n", trovata);
  return 0;
}

int ricerca(char testo[], char ricercata[])
{
  int dim,trovata=0,i=0;
  dim=strlen(ricercata);

  while(strlen(testo)-1>dim && trovata==0)
  {
    for(int j=0;j<dim && trovata==1;j++)
    {
      if(testo[i+j]!=ricercata[j])
      trovata=0;
      i++;
    }
  }
  if(trovata==0)
    return -1;
  else
    return i-1;
}
