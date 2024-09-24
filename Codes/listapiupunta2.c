#include<stdio.h>

struct nodo {
  int dato;
  struct nodo *next;
  struct nodo *nextP;
  struct nodo *nextD;
};
 typedef struct nodo *lista;

 //funzione inserisci, inserisce in coda.

 lista inserisci(lista l, int el)
 {
   lista temp;
   temp=malloc(sizeof(struct nodo));
   temp->el=el;
   temp->next=NULL;
   temp->nextP=NULL;
   temp->nextD=NULL;

   if(l==NULL){
     return temp;
   }

 else{
   cur=l;
   while(cur->next != NULL){         //inserito in coda
     if(cur->nectP=NULL && el%2==0)
       cur->nextP=temp;
       //
     if(cur->nextD==NULL && el%2==1)
       cur->nextD=temp;
       //
       cur=cur->next;
     }
   cur->next=temp;
   if(el%2==0)
     cur->nextP=temp;
   else if(el%2==1)
     cur->next=temp;

   return l;
 }
