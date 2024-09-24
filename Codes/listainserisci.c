//liste

struct nodo{
  int el;
  struct nodo *next;
};

typedef struct nodo *lista;

//INSERISCI IN TESTA
 lista inserisci_testa(int el, lista l)
 {
   //alloco spazio per lista temporanea
   struct nodo *temp=malloc(sizeof(struct nodo));
   //faccio puntare la lista temporanea all'elemento el
   temp->el=el;
   //e il successivo all'intera lista l
   temp->next=l;
   return temp;
 }
//RICORSIVA


//INSERISCI IN CODA
lista inserisci_coda(int el, lista l){
  if(l==NULL)
  l=inserisci_testa(el,l);
  //
else{
  struct nodo temp=malloc(sizeof(struct nodo));
  temp->el=el;
  temp->next=NULL;
  lista cur=l;

   while(cur->next!=NULL){              //scorro la lista fino a NULL
    cur=cur->next;
    }
   cur->next=temp;                 //sostituisco NULL con temp
 }
 return l;
}

//RICORSIVA
lista inserisci_codaric(lista l, int el)
{
  //caso base
  if(l==NULL)
    return inserisci_testa(l,el);
  //caso ricorsivo
  else
    l->next=inserisci_codaric(l->next,el);
    return l;
}

//INSERIMENTO TRA DUE ELEMENTI
