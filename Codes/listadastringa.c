//liste

struct nodo{
  int el;
  struct nodo *next;
}

typedef struct nodo *lista;

//CREAZIONE DI UNA LISTA
//modo iterativo
lista crea_lista(char s[])
{
  lista temp=NULL;

  if(s[0]=="\0")     //se la stringa è vuota
    return NULL;
  else{
    temp=malloc(sizeof(struct nodo));   //primo elemento
    temp->el=s[0];

    for(int i=0;i<strlen(s);i++){                       
      temp->next=malloc(sizeof(struct nodo));
      temp=temp->next;
      temp->el=s[i];
    }
    temp->next=NULL;
  }
  return temp;
}
