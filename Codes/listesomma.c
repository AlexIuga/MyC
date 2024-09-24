#include<stdio.h>

struct nodo
{
int val;
struct nodo *next;
};
typedef struct nodo *lista;

void inserisci_coda(lista *l; int val){
  //creare un nodo con la malloc
struct nodo *p;
p=malloc(sizeof(struct nodo));
p->val==val;
  //invece di puntare alla coda faccio puntare al
  if(l->next==NULL){
    l->next==p;
  }
}

*lista somma(lista *l1; lista *l2){

}
