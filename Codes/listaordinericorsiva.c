#include<stdio.h>


lista inserisci_in_ordine_ricorsiva(lista l, int l)    //con ricorsione
{
  if(l==NULL || el < l->el){
  struct nodo *p;
  p=malloc(sizeof(struct nodo));
  p->el=el;
  p->next=l;
  return p;
  }

  else{
      l->next=inserisci_in_ordine_ricorsiva(l->next, el);
    }

}
