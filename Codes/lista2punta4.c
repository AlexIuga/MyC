#include<stdio.h>

struct nodo{
  int dato;
  struct nodo *pre;
  struct nodo *suc;
};

 typedef struct nodo elem;
 typedef elem *lista;

 lista inserisci(lista l, int el){
   elem *cur,*prec,*p;
   prec=NULL;
   cur=l;
   p=malloc(sizeof(struct nodo));
   p->dato=el;
   p->pre=NULL;
   p->suc=NULL;

if(cur==NULL)
  return p;
 //inserire 1.scorrere
   while(cur->dato<el && cur!=NULL){
     prec=cur;
     cur=cur->suc;
   }  //inserire
   if(prec!=NULL || el!=cur->dato){
     prec->suc=p;
     p->pre=prec;
     p->suc=cur;
     cur->pre=p;
     return prec;
   }
   if else(prec==NULL){
     cur->pre=NULL;
     cur->suc=l;
     return cur;
   }
 }
