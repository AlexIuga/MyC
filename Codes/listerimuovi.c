//liste rimuovi

struct nodo{
 int el;
 struct nodo *next;
};

typedef struct nodo *lista;

//RIMUOVI IN TESTA
//invece di puntare a el la prima punta a quello successivo
lista rimuovi_testa(lista l)
{
  if(l!=NULL){
    lista temp=l;
   l=l->next;
   free(temp);
  }
  return l;
}

//RIMUOVI IN CODA
lista rimuovi_coda(lista l){
  if(l!=NULL){
    if(l->next==NULL)
      l=rimuovi_testa(l);
    else
      l->next=rimuovi_coda(l->next);
      return l;
  }
  else
   return NULL;
}
//RIMUOVI ELEMENTO
lista rimuovi(lista l, int el)
{
  if(l==NULL)
  return l;
  if else(l->el==el)
  l=rimuovi_testa(l);
  else{
    l->next=rimuovi_elemento(l->next,el);
    return l;
  }


}
