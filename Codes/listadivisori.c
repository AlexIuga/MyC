#include<stdio.h>
#include<stdlib.h>

struct nodo{
  int dato;
  struct nodo *next;
};
typedef struct nodo *lista;

lista listaFattori(int num);
lista inserisci_testa(int el, lista l);

int main(){
  lista l;
  int n;
  n=30;

  l=listaFattori(n);

  //stampare la lista
  while(l->next!= NULL){
    printf("%d, ", l->dato);
    l=l->next;
  }
  printf("\n");
  return 0;
}

lista listaFattori(int num){
  lista l=NULL;

  for(int i=num-1;i>0;i--){
    if(num%i==0){
      l=inserisci_testa(i,l);
  }
  return l;
}

lista inserisci_testa(int el, lista l)
{
  //alloco spazio per lista temporanea
  struct nodo *temp=malloc(sizeof(struct nodo));
  //faccio puntare la lista temporanea all'elemento el
  temp->dato=el;
  //e il successivo all'intera lista l
  temp->next=l;
  return temp;
}
