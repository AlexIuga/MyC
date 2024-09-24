#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//considerare le seguenti strutture dati

struct nodo{
int dato;
struct nodo *prec;
struct nodo *next;
};

typedef struct nodo elem;
typedef elem *lista;

//scrivere un programma che inserisce un elemento (il cui contenuto è intero)
//in una lista rispettando l'ordine tra gli elementi (in ordine)

//la lista non può contenere elementi duplicati e se si tentasse di aggiungere
//un elemento già esistente ,la funzione non fa nulla
//per indicare che la lista è vuota ,il valore della sua testa sarà NULL.


  lista inserisci(lista l, int dato){

  struct nodo *cur, *prec, *p;
  cur=l;
  prec=NULL;

  while(cur!=NULL && cur->dato <dato ){
    prec=cur;
    cur=cur->next;
  }

  if(cur==NULL || dato!= cur->dato)
  {
    p=malloc(sizeof(struct nodo));
    p->dato=dato;

    if(prec!=NULL)
       prec->next=p;

    p->next=cur;

    if(cur!=NULL)
       cur->prec=p;

       p->prec=prec;
  }
  if(prec==NULL)
   return p;
  else
   return l;

}

void stampa(lista l){
  //caso base: lista vuota
  if(l==NULL)
    printf("END\n");
    //caso generale
  else{
    printf("%d ->",l->nodo);
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
    valore=rand()%10;
    inserisci(l,valore);
  }

  stampa(l);

  return 0;
}
