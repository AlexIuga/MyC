#include<studio.h>

struct nodo{
  int el;
  struct nodo *next;
  struct nodo *last;
};

typedef struct nodo *lista;

lista inserisci_testa(lista l, int el){
  lista temp,cur;
  temp=malloc(sizeof(struct nodo));
  temp->el=el;
  temp->next=NULL;
  temp->last=NULL;

  if(l==NULL){
    return temp;
  }
  else{
    cur=l;
    temp->next=cur;
    if(cur->next==NULL);
    temp->last=cur->next;

    return temp;
  }

}
