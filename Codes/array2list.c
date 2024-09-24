//funzione array to list
#include<stdio.h>
#include<stdlib.h>

struct nodo{
  int dato;
  struct nodo *next;
};
typedef struct nodo *lista;

lista inserisci_testa(lista l,int dato);
lista array2list(array[],int dim);
lista array2list_ric(array[],int dim);

lista inserisci_testa(lista l,int dato){
  struct nodo *temp=malloc(sizeof(struct nodo));
  temp->dato=dato;
  temp->next=l;
  return temp;
}

lista array2list(array[],int dim){
  lista l=NULL;

  for(int i=dim;i>0;i--){
    l=inserisci_testa(l,array[i]);
  }
  return l;
}

lista array2list_ric(array[],int dim){
  lista l=NULL;

  if(dim==1)
    l=inserisci_testa(l,array[0]);
  else{
    l=array2list_ric(array+1,dim-1);
  }
  return l;
}
