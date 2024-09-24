//Si definiscano le strutture dati e la funzione di inserimento per una lista a
//puntatori.  Ogni elemento deveavere un puntatore verso l’elemento successivo e
//uno verso l’ultimo elemento della lista.L’inserimento avviene sempre in cima alla lista

#include<stdio.h>

struct nodo{
  int el
  struct nodo *next;
  struct nodo *last;
};
typedef struct nodo *lista;

lista inserisci_testa(lista l, int el){
  lista *temp=malloc(sizeof(struct nodo));
  temp->el=el;
  if(l==NULL){
    temp->next=NULL;
    temp->last=temp;
  }

  temp->next=l;
  //sistemo l'ultimo puntatore
  while(l!=NULL){
    l=l->next;
  }
  temp->last=l;

  return temp;
}
