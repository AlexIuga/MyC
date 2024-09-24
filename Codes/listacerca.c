#include<stdio.h>

//liste

struct nodo{
 int el;
 struct nodo *next;
};

typedef struct nodo *lista;


//CERCA ELEMENTO ITERATIVA

int ricerca(lista l, int el){

  while(l->next!=NULL){
    if(l->el==el)
     return 1;
     else
      return 0;
    l=l->next;
  }
}

//CERCA ELEMENTO RICORSIVA

int ricerca_ricor(lista l, int el){
  //caso base
  if(l==NULL)
    return 0;
  else if(l->el==el)
    return 1;
  //caso generale
  else{
    return ricerca_ricor(l->next,el);

  }
}
