//Scrivere un programma che legga in ingresso una matrice di dimensione NxM di
//numeri interi (dove N e M sono stabiliti dall'utente e valgono al massimo 20);
//successivamente, il programma deve stampare a video la matrice originale e la sua trasposta.
#include<stdio.h>
#define MAX 20

void stampa_trasposta(int matrice[][MAX], int righe,int colonne){
  int i,j;

  for(i=0;i<righe;i++){
    for(j=0;j<colonne;j++){
      printf("%d ", matrice[i][j]);
    }
    printf("\n");
  }
  printf("\n **************************** \n");

  for(i=0;i<colonne;i++){
    for(j=0;j<righe;j++){
      printf("%d",matrice[j][i]);
    }
    printf("\n");
  }
}

int main(){
  int matrice[MAX][MAX];
  int col,rig;
  //inserimento
  printf("inserire numero di colonne della matrice \n");
  scanf("%d",&col);
  printf("inserire numero di righe della matrice \n");
  scanf("%d",&rig);
  printf("inserire valori matrice \n");
  for(int i=0;i<rig;i++){
    for(int j=0;j<col;j++){
      scanf("%d",&matrice[i][j]);
    }
  }
  printf("\n");
  stampa_trasposta(matrice,rig,col);

  return 0;
}
