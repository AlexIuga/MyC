//Scrivere in C una funzione ricorsiva che prende come (soli) parametri una matrice
//quadrata di interi (arraybidimensionale) e la dimensione della matrice e restituisce:
//il valore letto sulla diagonale principale (dall’angolo in alto a sinistra a quello
//in basso a destra) se i valori sono tutti uguali,−1 altrimenti.
#include<stdio.h>
#define MAX 30

int diagonale(int matrix[][dim], int dim)
{
  int i,j;
  int uguali=1;

  //caso base: dim=1
  if(dim==1){
    return matrix[0][0];
  }
  else if(dim==0)
    return -1;
//caso generale
  else{
    if(matrix[0][0]==diagonale(matrix, dim-1)
    return matrix[0][0];

    else
    return -1;
  }

}
