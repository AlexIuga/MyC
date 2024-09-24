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
  lista temp = malloc(sizeof(struct nodo));
  temp->el = el;
  temp->next = *l;
  *l = temp;
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
  if (*l!=NULL)
  {
    lista temp = *l;
    *l = (*l)->next;
    free(temp);
  }
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
  int lung=0;
  while (l!=NULL)
  {
    lung++;
    l = l->next;
  }
  return lung;
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
  while (l!=NULL && l->el!=el)
    l = l->next;

  return l;
}

void inserisci_in_coda_ric (lista *l, data el)
{
  if (*l == NULL)
    inserisci_in_testa(l,el);
  else
    inserisci_in_coda_ric(&((*l)->next),el);
}

void inserisci_in_coda_iter (lista *l, data el)
{

  if(*l == NULL)
    inserisci_in_testa(l,el);
  else
  {
    lista cur = *l;
    while (cur->next != NULL)
      cur = cur->next;
    inserisci_in_testa(&(cur->next),el);
  }
}

void rimuovi_in_coda_ric (lista *l)
{
  if (*l!=NULL)
  {
    if ((*l)->next == NULL)
      rimuovi_in_testa(l);
    else
      rimuovi_in_coda_ric(&((*l)->next));
  }
}

void rimuovi_in_coda_iter (lista *l)
{
  if (*l!=NULL)
  {
    lista cur = *l;
    lista pre = NULL;
    while (cur->next !=NULL)
    {
      pre = cur;
      cur = cur->next;
    }
    if (pre!=NULL)
      pre->next = NULL;
    else
      *l = NULL;
    free (cur);
  }
}

void rimuovi_ric (lista *l, data el)
{
  if (*l!=NULL)
  {
    if ((*l)->el == el)
    {
      lista tmp = *l;
      *l = (*l)->next;
      free(tmp);
    }
    else
      rimuovi_ric(&((*l)->next),el);
  }
}

void rimuovi_iter (lista *l, data el)
{
  lista pre=NULL, cur=*l;
  while (cur!=NULL && cur->el != el)
  {
    pre = cur;
    cur = cur->next;
  }

  if (cur!=NULL)
  {
    if (pre!=NULL)
      pre->next = cur->next;
    else
      *l = cur->next;
    free(cur);
  }
}

void  stampa_ric (lista l)
{
  if (l==NULL)
    printf("END\n");
  else
  {
    printf(STAMPA,l->el);
    stampa_ric(l->next);
  }
}

void  stampa_iter (lista l)
{
  while (l!=NULL)
  {
    printf(STAMPA,l->el);
    l = l->next;
  }
  printf("END\n");
}
