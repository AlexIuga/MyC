//editor di testo
//
//MAX indica la lunghezza massima di una riga del file.
//Leggo i comandi e modifico il file di testo.
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1025

typedef enum {deleted,new,old,undochange,undodelete,good}stato;

//puntatore alla struct albero
typedef struct tree* tree_p;    //puntatori ai nodi
//nodi
struct tree{
    int key;          //la chiave è il numero della riga
    char *riga[MAX];     //puntatore alla stringa da inserire
    tree_p right;       //puntatore a figlio destro
    tree_p left;             //puntatore a figlio sinistro
    stato tipo;             //'colore' della foglia
    int *mossa;     //variabile che conta l'ordine delle mosse.
};

//funzioni
//CHANGE//
void change(tree_p t, int start,int end, int *puntamossa);
//DELETE//
tree_p deleteone(tree_p t,int key);
void delete(tree_p t, int start, int end, int *puntamossa);
//PRINT//
void one_print(tree_p t,int key);
void print(tree_p t, int start, int end);
//UNDO//
tree_p undo_one(tree_p t,int key);
void undo(tree_p t, int num, int *puntamossa);
//REDO//
void redo(tree_p t, int num);

//INSERIMENTO ALBERO// -> restituisce la radice dell'albero
tree_p insertline(tree_p t,int key,char *line);
//PADRE//////
tree_p padre(tree_p t,int key,stato newstato);

char *fgets(char *str, int n, FILE *stream);

int main() {
    int start,end,i=0,num,dim,contatore=0;
    char riga[MAX];
    char comando,virgola;
    tree_p root=NULL;
    int numeromossa=0;
    int puntamossa;
    puntamossa=&numeromossa;

    char *p;
    p=&riga[0];

    root->mossa=&numeromossa;

    do {
        printf("inserire un comando \n");
        if(fgets(riga,MAX,stdin)!=NULL){
            dim=strlen(riga);
        }
//se strlen==4    -implemento funzione lenght
        if(dim>=4)
        {
          start=atoi(riga);
            do{
              p=&riga[i];
              i++;
            }while(*p!=',');
          sscanf(p,"%c",&virgola);
            p=&riga[i];
            end=atoi(p);
            do{
              p=&riga[i];
              i++;
             }while(*p!='c' && *p!='d' && *p!='p');
          sscanf(p,"%c",&comando);

          printf("%d\n",start);
          printf("%c\n",virgola);
          printf("%d\n",end);
          printf("%c\n",comando);
            //indirizzo alle varie funzioni in base al char comando
            if(comando == 'c')
                change(root,start,end,puntamossa);
            else if(comando == 'd')
                delete(root,start,end,puntamossa);
            //else if(comando == 'p')
              //  print(start,end);
        }
// se strlen==2
        else if(dim>=2 && dim<5)
        {
            num=atoi(riga);
            do{
              p=&riga[i];
              i++;
            }while(*p!='u',*p!='r');
            sscanf(p,"%c",&comando);
            //chiama le varie funzioni in base a comando.
            if(comando=='u'){
              undo(root,num,puntamossa);
            }
            else if(comando=='r'){
              redo(root,num);
            }
        }
        else if(dim==1)
          sscanf(riga,"%c",&comando);
    }while(comando!='q');  //comando q termina le istruzioni
    return 0;
}


//inserisci riga nell'albero
tree_p insertline(tree_p t,int key,char *line){
    if(t!=NULL){
        if(key>t->key){     //se c'è già un nodo con la chiave uguale lo inserisce lo stesso, ma devo fare in modo che quello precedente abbia stato deleted
            t->right=insertline(t->right,key,line);
        }
        else if(key<t->key){
            t->left=insertline(t->left,key,line);
        }
        else if(key==t->key){
          t->right=insertline(t->right,key,line);
        }
    }
    else{
        t=(tree_p)malloc(sizeof(struct tree));
        t->left=NULL;
        t->right=NULL;
        t->key=key;
        t->riga=line;           //puntano alla stessa cosa
        t->stato=new;
    }
    return t;
}

tree_p deleteone(tree_p t,int key){
 if(key==t->key){
     t->tipo=deleted;
     return t;
   }
 else{
     if(key>t->key){
       t->right=deleteone(t->right,key);
     }
     else if(key<t->key){
       t->left=deleteone(t->left,key);
     }
  }
}
////PADRE PER UNDO
tree_p padre(tree_p t,int key,stato newstato){
  if(t->right==NULL)
  return NULL;

  if(t->right->key==key && t->key==key && t->right->stato=undochange){
    t->stato=newstato;
    return t;
  }
  if(t->key>key)
    return padre(t->left,key);
  if(t->key<key)
    return padre(t->right,key);
}

/////UNDO///////

void undo_one(tree_p t,int numeromossa){
  int key;
  if(t!=NULL){
    undo_one(t->left,numeromossa);
      if(numeromossa==*t->mossa && t->tipo==deleted){
        t->tipo=undodelete;
       }
      else if(numeromossa==*t->mossa && t->tipo==new){
        t->tipo=undochange;
        key=*t->mossa;
        t=precedente(t,key,new);
      }

    undo_one(t->right,numeromossa);
  }
}

//DELETE//

void delete(tree_p t,int start, int end, int *puntamossa){
    int contatore;
    int i=0;

    contatore=*puntamossa;       //nmossa=nmossa++;
    contatore=contatore++;
    t->mossa=&contatore;
    puntamossa=t->mossa;

    for(i=start;i<=end;i++){
       t=deleteone(t,i);
    }
    printf("testo tra le righe %d e %d cancellato\n",start,end);
}

////CHANGE////

void change(tree_p t, int start,int end,int *puntamossa){
  int i=0;
  char *line;
  int=contatore;
  char riga[MAX];

    contatore=*puntamossa;       //nmossa=nmossa++;
    contatore=contatore++;
    t->mossa=&contatore;
    puntamossa=t->mossa;

    for(i=start;i<=end;i++){
       do{
          if(fgets(riga,MAX,stdin)!=NULL){
            line=&riga;
          }
          t=insertline(t,i,line);
       }while(riga!='.');
    }
    ///se parte dalla riga zero.
    if(start==0 && end==0){
      do{
         if(fgets(riga,MAX,stdin)!=NULL){
           line=&riga;
         }
         t=insertline(t,i,line);
         i++;
      }while(riga!='.');
    }
      printf("testo tra le righe %d e %d modificato\n",start,end);
}

//stampa albero in ordine
void one_print(tree_p t,int key){
    if(t!=NULL){
        one_print(t->left);

      if(key==t->key && (t->stato==good || t->stato==undodelete)){
        printf("%d - %s \n", t->key,*t->line);
        one_print(t->right);
      }
    }
}

///PRINT/////

void print(tree_p t, int start, int end){
int i=0;
     printf("testo tra le righe %d e %d stampato\n",start,end);
  for(i=start;i<=end;i++){
    t=one_print(t,i);
  }
}


/////UNDO//////
void undo(tree_p t, int num, int *puntamossa){
 int i=0;
 int numeromossa=0,contatore;
 numeromossa=*puntamossa;
 //UNDO DELETE//
    for(i=num;i=0;i--){
         undo_one(t,numeromossa);
    }

    contatore=*puntamossa;       //nmossa=nmossa++;
    contatore=contatore++;
    t->mossa=&contatore;
    puntamossa=t->mossa;
}

void undo_one(tree_p t,int numeromossa){
  int key;
  if(t!=NULL){
    undo_one(t->left,numeromossa);
      if(numeromossa==*t->mossa && t->tipo==undodelete){
        t->tipo=deleted;
       }
      else if(numeromossa==*t->mossa && t->tipo==undochange){
        t->tipo=new;
        key=*t->mossa;
        t=precedente(t,key,old);
      }

    undo_one(t->right,numeromossa);
  }
}

void redo(tree_p t, int num, int *puntamossa){
  int i=0;
  int numeromossa=0,contatore;
  numeromossa=*puntamossa;


}
