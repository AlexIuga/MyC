#include<stdio.h>

struct nodo{
  int dato;
  struct nodo *next;
  struct nodo *last;
};
typedef struct nodo *lista;

//inserisci
lista inserisci(lista l, int dato){
  struct nodo *temp=malloc(sizeof(struct nodo));
  temp->dato=dato;
  lista cur;
  cur=l;

  if(l==NULL){
   temp->next=NULL;
   temp->last=temp;
   return temp;
  }

  temp->last=l->last;

 return temp;
}

lista rimuovi(lista l, int dato){
  struct nodo *temp;
  lista cur, prec;
  cur=l;
  prec=NULL;

  while(cur!=NULL && l->dato!=dato){
    prec=cur;
    cur=cur->next;
  }
  if(prec==NULL){
    temp=cur->next;
    free(cur);
    return temp;
  }
  else{
    prec=cur->next;
    free(cur);
    return l;
  }
}
