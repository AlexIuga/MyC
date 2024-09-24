//Definire le strutture dati e la funzione di inserimento per una lista a puntatori
//di caratteri.  Ogni elementodeve avere un puntatore verso l’elemento successivo
//e uno verso l;elemento precedente della lista. L’inserimento deve mantenere la
//lista ordinata (dalla A alla Z) e considerare che i caratteri maiuscoli vengono
//prima di quelli minuscoli. Inoltre, la lista non pu`o contenere caratteri ripetuti.

#include<stdio.h>
#include<string.h>

struct nodo{
  char c;
  struct nodo *next;
  struct nodo *prev;
};

typedef struct nodo *lista;

//inserimento
lista inserisci_ordine(lista l, char c){
  lista temp;
  lista cur=l;
  lista prec=NULL;
  temp=malloc(sizeof(struct nodo));
  temp->c=c;
  temp->next=NULL;
  temp->prev=NULL;
  //se la lista è vuota
  if(cur==NULL)
  return temp;
  //scorrere la lista finchè non trovo la giusta posizione lettere maiuscole
  if(c>'A' || c<'Z'){
    //scorro
    while(c < cur->c){
      prec=cur;
      cur=cur->next;
    }
    temp->next=cur;

    if(prec!=NULL){
      prec->next=temp;
      temp->prev=prec;
     return prev;
     }
    return temp;
    //lettere minuscole
  if else(c>'a' || c<'z'){
    //se è compreso tra a e z è dopo A e Z nella tabella ascii, quindi va bene almeno penso....
      while(c<cur->c){
        prec=cur;
        cur=cur->next;
      }
      temp->next=cur;
      if(prec!=NULL){
        prec->next=temp;
        temp->prev=prec;
        return prev;
      }
      return temp;
    }
  }
   else
  printf("il carattere non è valido o è già presente \n");
}
