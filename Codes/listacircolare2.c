#include<stdio.h>

typedef struct circular{
  int dato;
  struct circular *next;
}circulatList;
typedef circulatList *lista;

lista inserisci(lista l, int dato){
  lista *temp,*cur,*prec;
  int trovato=0;
  cur=l;
  prec=NULL;
  temp=malloc(sizeof(circularList));
  temp->dato=dato;
  temp->next=NULL;

  if(l==NULL){
    temp->next=temp;
    return temp;
  }
//scorrere una lista circolare
  while(cur!=l && trovato==1){
    if(cur->dato==dato)
      trovato=1;
    prec=cur;
    cur=cur->next;
  }

  if(trovato==0){
   temp->next=l;
   prec->next=temp;
   return temp;
  }
  else{
    return l;
  }
}
//STAMPA
void stampa(lista l){
  lista cur;
  cur=l;
  if(l!=NULL){
    while(cur!=l){
      printf("%d -> ",l->dato);
      cur=cur->next;
    }
  }
  
}
