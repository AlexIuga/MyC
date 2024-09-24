//Scrivere un programma per la gestione di una semplice videoteca.
//Il programma deve permettere all'utente di inserire dei film (al massimo 50),
//ognuno rappresentato dal nome, regista e anno. Successivamente, il programma
//deve permettere la ricerca del film più recente di un dato regista inserito dall'utente.
#include<stdio.h>
#define MAX 50

struct tipo{
  char titolo[MAX];
  char regista[MAX];
  int anno;
};
typedef struct tipo film;

 void cerca_film();

 int main(){
   film videoteca[MAX];
   char regista[MAX],filmcercato[MAX];
   int min;
   //inserimento
   printf("inserire al massimo 50 film \n");
   for(int i=0;i<MAX;i++){
     printf("titolo: \n");
     scanf("%s",videoteca[i].titolo);
     printf("regista: \n");
     scanf("%s",videoteca[i].regista);
     printf("anno: \n");
     scanf("%d",videoteca[i].anno);
   }
   //inserisci regista
   printf("inserire il regista da cercare \n");
   scanf("%s",regista);
   //cerca il film piu recente del segista x
   min=0;

   for(i=0;i<MAX;i++){
     if(strcmp(videoteca[i].regista,regista)==0){
       if(videoteca[i].anno>min){
         min=videoteca[i].anno;
         filmcercato=videoteca[i].titolo;
       }
     }
     else
     printf("il regista non è stato trovato \n");
   }
   printf("il film più recente del regista %s è %s dell'anno %d \n"regista,filmcercato,min);
   return 0;
 }
