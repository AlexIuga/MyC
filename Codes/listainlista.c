//Deﬁnire le strutture dati e la funzione di inserimento per una lista di liste
//di interi. Ogni elemento della lista principale deve contenere il puntatore
//all’elemento successivo e un ulteriore puntatore ad una lista (secondaria) di
//interi. Si scriva anche la funzione di inserimento che presa la testa della
//lista principale e tre interi (i, p1 e p2),inserisca i nella posizione p2 nella
//lista secondaria relativa all’elemento in posizione p1 nella lista principale.

#include<stdio.h>
#include<stdlib.h>

struct nododue{
  int dato;
  struct nododue *next;
};

typedef struct nododue *listadue;

struct nodop{
  int dato;
  struct nodop *next;
  listadue p;
};
typedef struct nodop *lista;

lista inserisci(lista l, int i, int p1, int p2){
  int conta=0,conta2=0;
  struct nodop *temp=malloc(sizeof(struct nodop));
  lista cur1,prec1;
  cur1=l;
  prec1=NULL;

  temp->dato=i;
  listadue cur,prec;
  cur=l->p;
  prec=NULL;
  //scorro la listadue fino a p2 e inserisco temp;
  //se p1 e p2 != da 1 e 0
  while(cur!=NULL){
    if(p2==conta){
      prec->next=temp;
      temp->next=cur;
    }
    conta++;
    prec=cur;
    cur=cur->next;
  }
  while(cur1!=NULL){
    if(p1==conta2){
      prec1->next=temp;
      temp->next=cur1;
    }
    prec1=cur1;
    cur1=cur1->next;
  }

}
