//Scrivere	una	funzione	C	che	riceve	in	ingresso	due	teste	di	liste	contenenti
//numeri	interi	(scrivere	anche	le	eventuali	dichiarazioni	di	tipo)	e	restituisce
//1	se	la	prima	lista	è	strettamente contenuta	nell’altra	(cioè	tutti	gli	elementi
//della	prima	lista	appartengono	anche	alla	seconda)	o	0	altrimenti.	Ciascuna
//lista	non	contiene	elementi	ripetuti	e	i	suoi	elementi	non	sono	ordinati.

#include<stdio.h>
#include<string.h>

int conta(lista l);

struct nodo{
  int dato;
  struct nodo *next;
};
typedef struct nodo *lista;

int contenuta(lista a, lista b){
  lista cur;
  int uguali=1,la,lb,m;
  la=conta(a);
  lb=conta(b);
  if(a==NULL || b==NULL)
   return 0;
  if(la!=lb)
   uguali=0;

    while(b!=NULL){
      cur=a;
      while(cur!=NULL){
        if(b->dato!=cur->dato)
        uguali=0;
        cur=cur->next:
      }
      b=b->next;
    }
   return uguali;
}


int conta(lista l){
  int conta=0;
  while(l!=NULL){
    conta++;
    l=l->next;
  }
  return conta;
}
