#include<stdio.h>
#include<string.h>
#define COD 4
#define ROTTE 100

typedef struct cod{
  char codPartenza[COD];
  char codArrivo[COD];
  int distanza;
}rotta;

int main(){
  rotta dati[ROTTE];
  char a[COD];
  int i,min;
  for(i=0;i<ROTTE;i++){
    printf("inserire codice dell'aeroporto di partenza \n");
    scanf("%s",dati[i].codPartenza);
    printf("inserire codice dell'aeroporto di arrivo \n");
    scanf("%s",dati[i].codArrivo);
    printf("inserire la distanza in miglia \n");
    scanf("%d",&dati[i].distanza);
  }
  //stampare l'aeroporto + vicino dato l'aeroporto di codPartenza
    printf("inserire il codice dell'aeroporto di partenza \n");
    scanf("%s",a);
    //cercare
    min=-1;
    for(i=0;i<ROTTE;i++){
      if(strcmp(a,dati[i].codPartenza)==0 && (min=-1 || dati[i].distanza<dati[min].distanza)){
        min=i;
      }
      if(min==-1)
      printf("aeroporto non trovato \n");
      else
      printf("l'aeroporto piu vicino è %s",dati[min].codArrivo);
    }
    return 0;
}
