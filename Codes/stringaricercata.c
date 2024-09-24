#include <stdio.h>
#include <string.h>
#define MAX 200
#define DIM 1000

int ricerca(char ricercata[], char testo[]);

int main()
{


  char testo[DIM];
  char ricercata[MAX];
  int trovata;


  printf("inserire un testo \n\n");
  scanf("%[^\n]",testo);

  printf("inserire la parola cercata nel testo \n\n");
  scanf("%s",ricercata);


trovata=ricerca(testo, ricercata);

if(trovata==-1)
  printf("non ho trovato %s nel testo \n", ricercata);
else
  printf("la parola %s è alla posizione %d \n", ricercata, trovata);



return 0;
}

//funzione per trovare la parola ricercata
int ricerca(char testo[] , char ricercata[]){
  int l1,l2,trovata=0,i=0,j;
  l1=strlen(testo);
  l2=strlen(ricercata);
  while(l1-1 >= l2 && trovata==0){
    trovata=1;
    for(j=0;j<l2 && trovata==1;j++)
       if(testo[i+j]!=ricercata[j])
       trovata=0;
    i++;
  }
 if(trovata==0)
    return -1;
 else
    return i-1;

}
