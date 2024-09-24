#include "liste.h"

/* VERSIONI ITERATIVE/RICORSIVE DA IMPLEMENTARE */
int lunghezza_ric(lista l);
int lunghezza_iter(lista l);

lista ricerca_ric(lista l, data el);
lista ricerca_iter(lista l, data el);

void inserisci_in_coda_ric (lista *l, data el);
void inserisci_in_coda_iter (lista *l, data el);

void rimuovi_in_coda_ric (lista *l);
void rimuovi_in_coda_iter (lista *l);

void rimuovi_ric (lista *l, data el);
void rimuovi_iter (lista *l, data el);

void  stampa_ric (lista l);
void  stampa_iter (lista l);

/*************************************************/

int lunghezza (lista l, int ric)
{
  if (ric==1)
    return lunghezza_ric(l);
  else
    return lunghezza_iter(l);
}

lista ricerca (lista l, data el, int ric)
{
  if (ric==1)
    return ricerca_ric(l,el);
  else
    return ricerca_iter(l,el);
}

void inserisci_in_testa(lista *l, data el)
{
  struct nodo *temp = malloc(sizeof(struct nodo));
  temp=l;
  l->el=el;
  l->next=temp;     ///////????????
}

void inserisci_in_coda (lista *l, data el, int ric)
{
  if (ric==1)
    inserisci_in_coda_ric(l,el);
  else
    inserisci_in_coda_iter(l,el);
}

void rimuovi_in_testa (lista *l)
{
  //TODO
}

void rimuovi_in_coda (lista *l, int ric)
{
  if (ric==1)
    rimuovi_in_coda_ric(l);
  else
    rimuovi_in_coda_iter(l);
}

void rimuovi (lista *l, data el, int ric)
{
  if (ric==1)
    rimuovi_ric(l,el);
  else
    rimuovi_iter(l,el);
}

void stampa (lista l, int ric)
{
  if (ric==1)
    stampa_ric(l);
  else
    stampa_iter(l);
}

int lunghezza_ric(lista l)
{
  if (l==NULL)
    return 0;
  else
    return 1 + lunghezza_ric(l->next);
}

int lunghezza_iter(lista l)
{
  //TODO
}

lista ricerca_ric(lista l, data el)
{
  if (l == NULL || l->el == el)
      return l;
  else
    return ricerca_ric(l->next,el);
}

lista ricerca_iter(lista l, data el)
{

}

void inserisci_in_coda_ric (lista *l, data el)
{
  //TODO
}

void inserisci_in_coda_iter (lista *l, data el)
{

  //TODO
}

void rimuovi_in_coda_ric (lista *l)
{
  //TODO
}

void rimuovi_in_coda_iter (lista *l)
{
  //TODO
}

void rimuovi_ric (lista *l, data el)
{
  //TODO
}

void rimuovi_iter (lista *l, data el)
{
  //TODO
}

void  stampa_ric (lista l)
{
  //TODO
}

void  stampa_iter (lista l)
{
  //TODO
}
