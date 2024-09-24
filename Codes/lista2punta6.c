//e scrivere una funzione C che inserisce un elemento,il cui contenuto `e un intero,
//in una certa posizione della lista: il numero e la posizione sono parametri della funzione.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

struct nodo{
  int dato;
  struct nodo *pre;
  struct nodo *suc;
};
typedef struct nodo elem;
typedef elem *lista;

int conta(lista l);
lista inserisci_testa(lista l, int dato);
lista inserisci(lista l, int p, int dato);
void stampa(lista l);
int cerca(lista l, int el);

int main()
{
    lista l = NULL;
    int i,posizione;
    int valore, elemento,pos=7;
    elemento=400;

    srand(time(NULL));

    for(i = 0; i < 10; i++) {
        valore = rand() % 100;
        printf("Inserisco: %d\n", valore);
        l = inserisci_testa(l, valore);
    }
    l=inserisci(l,pos,elemento);

    printf("la lista è:  ");
    stampa(l);
    posizione=cerca(l,elemento);
    printf("prima del valore cercato ci sono %d elementi \n",posizione);

    return 0;
}

int cerca(lista l, int el){

  if(l==NULL || l->dato==el)
    return 0;

  else
    return 1 + cerca(l->suc,el);
}


lista inserisci(lista l, int p, int dato){
  elem *temp=malloc(sizeof(struct nodo));
  temp->dato=dato;
  lista cur,prec;
  int n,i=0;
  n=conta(l);
  //casi particolari
  if(p>n)
   return l;

  if(p==0){
    l=inserisci_testa(l,dato);
    temp->pre=NULL;
  }

  //if(p==n)
  //l=inserisci_coda(l,dato);  //+pre che punta a cur->next quando cur=NULL
  //
  cur=l;
  prec=NULL;

  while(cur!=NULL){
    if(i==p){
      if(cur->dato==dato)
        break ;
      prec->suc=temp;
      temp->pre=prec;
      temp->suc=cur;
      cur->pre=temp;
    }
    i++;
    prec=cur;
    cur=cur->suc;
  };
  return l;
}

int conta(lista l){
  if(l==NULL)
   return 0;
  else{
     return 1+conta(l->suc);
   }
}

lista inserisci_testa(lista l, int dato){
  lista temp=malloc(sizeof(struct nodo));
  temp->dato=dato;
  temp->pre=NULL;
  temp->suc=l;
  return temp;
}

void stampa(lista l){
  while(l!=NULL){
    printf("%d ", l->dato);
    l=l->suc;
  }
  printf("\n\n");
}
