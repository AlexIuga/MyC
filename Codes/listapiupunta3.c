//Definire in C le strutture dati e la funzione di inserimento per una lista a
//puntatori. Ogni elemento deve avere un puntatore verso l’elemento successivo,
//l’elemento pi`u grande e l’elemento pi`u piccolo presente nella lista.
//L’inserimento avviene sempre mantenendo la lista ordinata (dal numero pi`u
//piccolo al pi`u grande) e senza ripetizioni. Se un numero`e gia presente nella
//lista, l’operazione di inserimento non deve fare nulla.
#include<stdio.h>

struct nodo{
  int el;
  struct nodo *next;
  struct nodo *min;
  struct nodo *max;
};

typedef struct nodo *lista;

lista inserisci_inordine(lista l, int el){
  lista* temp,cur,prec;     //not sure *
  cur=l;
  prec=NULL;
  //inizializzazione temp
  temp=malloc(sizeof(struct nodo));
  temp->el=el;
  temp->next=NULL;
  temp->min=NULL;
  temp->max=NULL;
//se la lista è vuota
  if(l==NULL)
    return temp;
//else mettere l'elemento in ordine.
  while(el<cur->el && cur->next!=NULL){
    prec=cur;
    cur=cur->next;
  }
  temp->next=cur;
  if(prec!=NULL)
   prec->next=temp;
   //farlo puntare al piu grande
   if(cur->next==NULL){    //dovrebbe funzionare anche nel caso sia lui il piu grande
     temp->max=cur;
   }
   //se è l'elemento piu grande far puntare tutti i puntatori a elementosuccessivo

   //farlo puntare al piu piccolo

}
