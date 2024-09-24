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
    char *riga;     //puntatore alla stringa da inserire
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
    int *puntamossa;
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
            else if(comando == 'p')
                print(root,start,end);
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
          t->tipo=old;
          t->right=insertline(t->right,key,line);
        }
    }
    else{
        t=(tree_p)malloc(sizeof(struct tree));
        t->left=NULL;
        t->right=NULL;
        t->key=key;
        t->riga=line;           //puntano alla stessa cosa
        t->tipo=new;
    }
    return t;
}

////CHANGE////

void change(tree_p t, int start,int end,int *puntamossa){
  int i=0;
  char *line;
  int contatore;
  char riga[MAX];

    contatore=*puntamossa;       //nmossa=nmossa++;
    contatore=contatore++;
    t->mossa=&contatore;
    puntamossa=t->mossa;

    for(i=start;i<=end;i++){
       do{
          if(fgets(riga,MAX,stdin)!=NULL){
            line=&riga[0];
          }
          t=insertline(t,i,line);
       }while(*line!='.');
    }
    ///se parte dalla riga zero.
    if(start==0 && end==0){
      do{
         if(fgets(riga,MAX,stdin)!=NULL){
           line=&riga[0];
         }
         t=insertline(t,i,line);
         i++;
      }while(*line!='.');
    }
      printf("testo tra le righe %d e %d modificato\n",start,end);
}
