//Definire un	tipo di	dato	opportuno	clista	per	realizzare	una	lista	dinamica	
//di caratteri (ogni elemento	è	un carattere) e serve per gestire sequenze di
//caratteri.Si definisce inciso una sequenza di caratteri compresa tra una
//parentesi	tonda	aperta ed	una	parentesi	tonda	chiusa.Implementare	una	funzione
//che	riceve in	ingresso un	puntatore	alla testa di	una	lista	che	rappresenta	una
//sequenza di	caratteri	e	la modifica	sostituendo	tutti	gli	incisi con uno spazio.

#include<stdio.h>

struct nodo{
  char c;
  struct nodo *next;
};
typedef struct nodo *clista;

clista rimuoviIncisi(clista *t){
  clista cur,prec;
  cur=*t;
  prec=NULL;
  while(cur!=NULL){
    if(cur->c=='('){
      while(cur->c!=')'){

      }
    }
    prec=cur;
    cur=cur->next;
  }

}
