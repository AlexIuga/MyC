//CONCATENARE LISTE

struct nodo{
  int el;
  struct nodo *next;
};

typedef struct nodo *lista;

lista concatena(lista a, lista b)
{
  if(a==NULL)
   return b;

  else{
   while(a->next!=NULL){
    a=a->next;
    }
  a->next=b;

  return a;
  }
}
//FUNZIONE VOID  - forse
void concatena2(lista *a, lista *b)
{
   if(*a==NULL)
     *a=*b;
  else{
    while(*a!=NULL)
     a*=(*a)->next;

    (*a)->next=*b;
  }
}
