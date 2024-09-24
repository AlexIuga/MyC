//scrivere una funzione che ricevuto in ingresso un array di interi
//ed un valore c da cercare, restituisce tutte le posizioni in cui
//il valore c è stato trovato all'interno di a.
// esempio: input a=[0,3,0,3,2,1,3,4], c=3 -> output: [1,3,6]

#include<stdio.h>

int cerca_tutti(int*a, int dim, int c, int *pos){
  int contatore=0;

  for(i=0;i<dim;i++){
    if(a[i]==c){
      pos[contatore]=i;      //cosi ritorno
      contatore ++;
    }
  }
  return contatore;
}

int main(){
  int array[MAX];
  int pos[MAX];
  int x,dim,i,contatore;

  printf("inserire la dimensione dell'array \n");
  scanf("%d",&dim);
  printf("inserire un array di interi \n\n");
  for(i=0;i<dim;i++){
    scanf("%d"&array[i]);
  }
  printf("inserire il numero da cercare \n");
  scanf("%d",&x);

  contatore= cerca_tutti(array, dim, x, pos);

  printf("l'elemento è alle posizioni \n\n");
        for(i=0;i<trovati;i++){
          printf("%d",pos[i]);
        }
        printf("\n\n");

  return 0;
}
