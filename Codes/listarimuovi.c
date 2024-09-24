//rimuovere un elemento

//rimozione in testa

lista rimuovi_testa (lista l){
  if(l!=NULL){
      lista temp=l;        //salvare l'indirizzo originale
      l=l->next
      free(temp);
      return l;
  }
  else
    return NULL;
}

lista rimuovi_coda (lista l){
  if(l==NULL){
    return NULL;
  }                                      //versione ricorsiva
  if(l->next==NULL)
    return rimuovi_testa(l);
  else
    l->next = rimuovi_coda(l->next);
    return l;
}

lista rimuovi(lista l){
  lista cur=l, prec=NULL;

  if(cur!=NULL){
    while(cur!=NULL && cur->el !=el){
      prec=cur;
      cur=cur->next;
    }
    if(cur==NULL)
       return l;

    if(prec==NULL){
      cur=cur->next;                           //se è il primo elemento
      return rimuovi_testa(cur);              //non entra nel while
    }                                         //quindi prec resta NULL

    prec->next=cur->next;
    free(cur);
    return l;
  }
}

//come richiamare
int main(){
lista l=NULL;
  l=inserisci_testa(l,1)
  return 0;
}


//inserisci testa 2

void inserisci_testa2 (lista *l, data el){             //senza ritorno
   struct nodo *temp;   //lista temp
   temp=malloc(sizeof(struct nodo));
   temp->el = el;
   temp->next = *l;
   *l=temp;
}
