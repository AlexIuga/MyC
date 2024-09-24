//implementare una funzione che consenta di inserire interi in ordine crescente
//all'interno di una lista

#include <stdio.h>
#include<stdlib.h>
#include<time.h>

struct nodo{                     //inserire elementi lista
  int el;
  struct nodo* next;
};

typedef struct nodo* lista;           //inizializzare

lista inserisci_in_ordine(lista l, int el){

  struct nodo *p, *cur, *prec;
  p=malloc(sizeof(struct nodo));           //allocare definitivamente il nodo per salvarlo
  p->el=el;
  p->next=?;
  cur=l;
  prec=NULL;

  while(cur!=NULL && cur->el < el){
    prec=cur;
    cur= cur->next;
  }
  p->next=cur;


  if(prec!=NULL)
   prec->next=p;
   return l;
  if(prec==NULL)
   return p;

}

void stampa(lista l){
  //caso base: lista vuota
  if(l==NULL)
    printf("END\n");
    //caso generale
  else{
    printf("%d ->",l->el);
    stampa(l->next);
  }
}

int main()
{
  lista l=NULL;
  int i;
  int valore;

  srand(time(NULL));

  for(i=0;i<10;i++){
    valore=rand()%100;
    inserisci_in_ordine(l,valore);
  }

  stampa(l);

  return 0;
}
