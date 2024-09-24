//invece di puntare a NULL l'ultimo elemento punta al primo.



struct circular
{
  int data;
  struct circular* next;

};

typedef stuct circularList;

typedef circularList *lista;

//aggiungere un intero in qualunque posizione


//stampa iterativamente la lista circolare

void stampa(lista l)
{
  struct circular *cur;
  cur=l;
   if(l==NULL){
     printf("Lista vuota\n");
   }
  else{
   do{
    printf("%d\n"cur->data);
    cur=cur->next;
   }while(cur != l)
  }
}
