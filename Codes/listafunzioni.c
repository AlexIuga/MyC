//liste e funzioni

#include<stdio.h>

struct nodo{
  int data;
  struct nodo *next;
};

typedef struct nodo *lista;

lista lista inserisci(lista l)     //funzione inserisci in testa
{
  lista temp;
  temp=malloc(sizeof(struct nodo))
  tep->data=data;
  temp->next=l;
  return temp;
}

int cerca(lista l, int data)     //funzione di ricerca dell'elemento
{
  int trovata=0;

  while(l!=NULL)
    {
      if(l->data==data)
       trovata=1;
      else
      l=l->next;
    }
  return trovata;
}

lista interseca(lista a, lista b)
{
   lista c=NULL;
  //c sia l'intersezione di a e b
  while(a!=NULL)
  {
  //cerca a->data in b
   if(cerca(b,data)==1)
     c=inserisci(c,a->data);
  a=a->next;
  }

   return c;
}
