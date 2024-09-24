//Implementare una funzione che consenta di inserire interi in ordine crescente
//all’interno di una linked list.

#include<stdio.h>
#include<stdlib.h>

struct nodo{
  int dato;
  struct nodo *next;
};
typedef struct nodo *lista;

lista inserisci(lista l, int dato){
  lista cur=l,prec=NULL;
  struct nodo *temp=malloc(sizeof(struct nodo));
  temp->dato=dato;
  temp->next=NULL;

  while(cur!=NULL && cur->dato<dato){
    prec=cur;
    cur=cur->next;
  }
  if(prec==NULL){
    temp->next=l;
    return temp;
  }
  if(cur==NULL){
    cur->next=temp;
    temp->next=NULL;
    return l;
  }
  else{
    prec->next=temp;
    temp->next=cur;
    return l;
  }
}
