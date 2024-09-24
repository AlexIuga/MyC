//liste

//CONTA ELEMENTI
 struct nodo{
   int el;
   struct nodo *next;
 }

 typedef struct nodo *lista;

//ITERATIVA
int conta_iter(lista l){
  int n;
  while(l !=NULL){
    n++;
    l=l->next;
  }
  return n;
}
//RICORSIVA
int conta_ricor(lista l){
  if(l=NULL)
  return 0;
  else
  return 1+conta_ricor(l->next);
}
