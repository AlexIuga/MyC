#include <stdio.h>
#include <stdlib.h>

typedef struct _elem
{
  char car;
  struct _elem * next;

}car_t;

typedef car_t *lista;

lista carica(char nomefile[])
{
   FILE *fp;
   lista l=NULL;
   fp=fopen(filename,"r");
   //verificare che file valga
   if(fp==NULL){
     printf("non riesco ad aprire il file: %s\n",filename);
     exit(1); }   //termina con errore

int n;
char ch;
int res;

while{
  res = fscanf(fp, "%c",&ch);
  if(res!=2)
    break;

  fscanf(fp, "%d", &n);

  for(i=0;i<n;i++){
    l=inserisci(l,ch);
  }
  return l;
}


}

void salva(lista l,filename[])
{
  
}

lista inserisci_in_testa(lista l;char ch)
{
  car_t *cur, *prec, *p;
  prec=NULL;
  cur=l;

  while(cur!=NULL && ch>cur->car){
    pre=cur;
    cur=cur->next;
  }
  p=malloc(sizeof(car_t));
  p->car=ch;
  p->next=cur;

  if(pre!=NULL)
  pre->next=p;
  else
  l=p;

  return l;
}
