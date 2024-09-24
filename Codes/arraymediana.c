//Scrivere in C una funzione, senza parametri e che non restituisce nulla, che
//legge una sequenza di numeriterminata dallo 0.La funzione deve considerare
//solo i valori dei numeri letti che sono multipli di 3, calcolarne la mediana
//(non la media) e stamparne a video il valore.
#include<stdio.h>
#define MAX 30
void ordina(int a[],int dim){
  int i,j,t;

  for(i=0;i<dim;i++){
    for(j=i+1;j<dim;j++){
      if(a[i]>a[j]){
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
}

void mediana(){
  int i=0,j=0,mediana;
  int supp[MAX],dim,x;
//leggere la sequenza terminata da 0
  printf("inserire una sequenza di numeri terminata da zero \n");
  do{
    scanf("%d",&x);
    if(x==0)
      break;

    if((x%3)==0){
      supp[j]=x;
      j++;
    }
  }while(x!=0);
  //ordinare la sequenza
  dim=j;
  ordina(supp,dim);

printf("la mediana è \n");
  if(dim%2==1){
    printf("%d \n",supp[dim/2]);
  }
  else if(dim%2==0){
    mediana=(supp[dim/2]+supp[dim/2-1])/2;
    printf("%d \n",mediana);
  }
}

int main(){
  mediana();
  return 0;
}
