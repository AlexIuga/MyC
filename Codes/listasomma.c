#include<stdio.h>
#include<stdlib.h>
//somma di due liste

struct nodo{
  int el;
  struct nodo *next;
};

typedef struct nodo *lista;

lista inserisci(lista l, int el);
lista string2list(int array[],int n);
lista somma(lista a, lista b);
int conta(lista l);
//////////////
lista inserisci(lista l, int el)
{
  //alloco spazio per lista temporanea
  lista temp;
  temp=malloc(sizeof(struct nodo));
  //faccio puntare la lista temporanea all'elemento el
  temp->el=el;
  //e il successivo all'intera lista l
  temp->next=l;
  return temp;
}

lista string2list(int array[],int n)
{
  lista l=NULL;
  int i;

  for(i=0;i<n;i++){
    l=inserisci(l,array[i]);
  }
  return l;
}

lista somma(lista a, lista b)
{
  int la,lb;
  lista temp=NULL;
  la=conta(a);
  lb=conta(b);

  if(a==NULL)
  return b;
  else if(b==NULL)
  return a;

  if(la>lb)
    temp=a;
  else
    temp=b;

  while(a->next!=NULL && b->next!=NULL){
      temp->el=(a->el)+(b->el);
      a=a->next;
      b=b->next;
      temp=temp->next;
   }
   return temp;
}


int conta(lista l){
  int n;
  while(l->next!=NULL){
    l=l->next;
    n++;
  }
  return n;
}

///un main
int main()
{
  lista a,b,c;
  int arraya[4]={3,6,8};
  int arrayb[6]={4,7,4,11,15};

  a=string2list(arraya,4);
  b=string2list(arrayb,6);

  c=somma(a,b);

  while(c!=NULL){
    printf("%d ->",c->el);
  }
  printf("/n");
}
