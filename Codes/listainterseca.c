//Si implementi la funzione lista interseca(lista a, lista b), che riceve in
//ingresso la testa di due liste (a e b) e restituisce la testa di una lista che
//contiene tutti gli elementi che sono presenti sia nella lista a che nella lista b.

struct nodo{
  int data;
  struct nodo *next;
};
typedef struct nodo *lista;

lista interseca(lista a, lista b){
  lista temp;
  temp=NULL;
  lista cur;
  cur=b;
  while(a!=NULL && cur!=NULL){
    if(a->dato==cur->dato){
       temp=inserisci_testa(temp,dato);
    }
    a=a->next;
    cur=cur->next;
  }
  return temp;
}

lista inserisci_testa(lista l, int dato){
  struct nodo *temp=malloc(sizeof(struct nodo));
  temp->data=dato;

  if(l==NULL){
    temp->next=NULL;
  }
  temp->next=l;
  return temp;

}
