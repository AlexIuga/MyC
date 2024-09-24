//13.02.17 es 2
//

#include<stdio.h>

struct nodo{
  int dato;
  struct nodo *next;    //punta al successivo elemento
  struct nodo *nextP;   //punta al successivo elemento pari (altrimenti a NULL)
  struct nodo *nextD;  //punta al prossimo dispari
};

typedef struct nodo *lista;

//implementare una funzione inserisci in coda

lista inserisci(lista l, int dato)
{
  lista p,cur;

  p=malloc(sizeof(struct nodo));  ///creo il nuovo elemento della lista
  p->next=NULL;
  p->nextP=NULL;
  p->nextD=NULL;

  if(l==NULL)
    return p;
  else  //inserisco in coda
  {
    cur=l;    //uso variabile di supporto per scorrere la lista
    while(cur->next!=NULL)    //sono sicuro che la lista sia vuota perchè(if(l==NULL))
    {
      if(cur->nextP==NULL && dato%2==0)
        cur->nextP=p;
        cur=cur->nextP;
      if(cur->nextD==NULL && dato%2==1)
        cur->nextD=p;
        cur=cur->nextD;
    }
  //sistemo i puntatori di p
    cur->next=p;
    if(dato%2==0)
      cur->nextP=p;
    else
     cur->nextD=p;
  }

  return l;
}

//funzioni con puntatori solo se modifico la testa (struttura) lista per esempio
//void stampa(lista l) non lista *l (si usa solo con la possibilità che il primo elemento cambi)
