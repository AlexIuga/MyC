//Scrivere una funzione che ricevuto in ingresso un array a di interi,
//ed un valore c da cercare, ritorna un puntatore alla prima posizione dell’array
//contenente il valore c, oppure NULL se il valore non è presente.

#include<stdio.h>

int* punta(int array[],int dim,int c)
{
  for(int i=0;i<dim;i++){
    if(array[i]==c){
    return array+i;
    }
    else
      return NULL;
  }
}

int main(){
  int array[10];
  int c;
  int *p;

printf("inserire un array di interi \n");
  for(int i=0;i<10;i++){
     scanf("%d",&array[i]);
   }

  printf("inserire un numero da cercare \n");
    scanf("%d",&c);

   p=punta(array,10,c);

  if(p==NULL)
    printf("il valore non è stato trovato \n");
  else
  printf("il numero cercato è alla posizione %ld \n", (p-array));

  return 0;
}
