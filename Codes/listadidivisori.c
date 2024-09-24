//lista fatta di divisori
#include<stdio.h>
#include<stdlib.h>

struct nodo{
  int dato;
  struct nodo *next;
};

typedef struct nodo *lista;

lista listaFattori(int num);
lista inserisci_coda(lista l, int dato);

int main(){
  lista l;
  int n;
  n=30;

  l=listaFattori(n);

  //stampare la lista
  while(l->next!= NULL){
    printf("%d, ", l->dato);
    l=l->next;
  }
  printf("\n");
  return 0;
}

lista listaFattori(int num){
  lista l=NULL;

  for(int i=0;i<num;i++){
    if(num%i==0){
      l=inserisci_coda(l,i);
    }
  }
  return l;
}

lista inserisci_coda(lista l, int dato){
  lista temp=malloc(sizeof(struct nodo));
  temp->dato=dato;
  temp->next=NULL;
  lista cur=l;

  if(l==NULL)
   return temp;
   //inserisci in coda
  while(cur->next!=NULL)         //non sono sicura ma sulle altre l'ho segnata cosi
    cur=cur->next;
  cur->next=temp;
  return l;
}
