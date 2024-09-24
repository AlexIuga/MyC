//string2list
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

struct nodo{
  char c;
  int num;
  struct nodo *next;
};
typedef struct nodo *lista;

lista string2list(char s[]){
  lista l=NULL,cur;
  cur=l;
  int dim=srtlen(s);
  l=inserisci_testa(l,s[dim]);

    for(int i=dim-1;i>0;i--){
      while(cur!=NULL){

        if(s[i]!=cur->c)
          cur=inserisci_testa(cur,s[i]);
        else{
          cur->num++;
        }

        cur=cur->next;
      }
      return l;
  }

}

lista inserisci_testa(lista l, char c){
  struct nodo *temp=malloc(sizeof(struct nodo));
  temp->c=c;
  temp->next=l;
  temp->num=1;
  return temp;
}
