//funzione string2list che riceve una stringa str e restituisce una lista
//cosi organizzata: la lista deve contenere un elemento per ciascun carattere distinto presente
//in str, inoltre ogni elemento della lista che dovrà contenere sia il carattere associato
//all'elemento che il numero di volte che quell'elemento compare in str



#include<stdio.h>


typedef stuct nodo{
  char c;
  int rip;
  struct nodo *next;
}lista;

//oppure
/*
typedef struct{
  char c;
  int rip;
}data;                                  //ALTRO MODO

struct nodo{
data el;
struct nodo *next;
}
*/
lista inserisci(lista l; char c)      //inserisci in modo smart()        //void inserisci(lista *l;char c) modifica la lista in ingresso
{
  lista cur=l;  //lista di supporto
  int trovato=0;

  while(cur!=NULL && trovato==0)
  {
    if(cur->c==c){
      cur->rip++;
      trovato=1;
    }
    else
    cur=cur->next;
  }

  if(trovato==1)
       return l;
  else{
//inserisci in testa perchè non ho tenuto conto della fine della lista
   cur=malloc(sizeof(struct nodo));
   cur->c=c;
   cur->rip=1
   cur->next=l;
   return cur;
 }
}

lista string2list(char str[])
{
  lista l=NULL;
  int i;

  for(i=0;i<strlen(str);i++){
    l=inserisci(l,str[i]);
  }
  return l;
}
