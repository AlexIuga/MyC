//

struct snodo{
  int el;
  struct snodo *next;
};

typedef struct nodo *inlista;

struct nodo{
  int el;
  struct nodo *next;
  struct snodo *mag;
};
typedef struct nodo *lista;

lista inserisci(lista l,inlista *l2 int el){
  //inserisci in testa in struct nodo
  struct nodo *temp=malloc(sizeof(struct));
  temp->el=el;
  temp->next=l;
  temp->mag=NULL;
  //inserisci in ordine in struct snodo
  struct snodo *intemp=malloc(sizeof(struct snodo));
  inlista cur,prec;
  prec=NULL;
  cur=*l2;
  intemp->el=el;
  while(cur!=NULL && el<cur->el){
    prec=cur;
    cur=cur->next;
  }
  (if=prec!=NULL)
  {
   prec->next=intemp;
   intemp->next=cur;
  }
//far puntare el con mag a quello dopo el nella lista sopra
  while(cur!=NULL && el<cur->el){
    temp->mag=intemp->next;
  }
  return temp;
}
