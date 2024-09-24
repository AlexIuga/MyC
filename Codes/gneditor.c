#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1025

typedef enum {deleted,new,old,undochange,undodelete}stato;
//new=1
//old=2
//deleted=3
//undochange=4
//undodelete=5
//
//puntatore alla struct albero
typedef struct tree* tree_p;    //puntatori ai nodi
//nodi
struct tree{
    int key;          //la chiave è il numero della riga
    char *riga;       //puntatore alla stringa da inserire
    tree_p right;       //puntatore a figlio destro
    tree_p left;             //puntatore a figlio sinistro
    int mossa;     //variabile che conta l'ordine delle mosse.
    int stato;
};

//funzioni
//CHANGE//
tree_p create_node(tree_p t,int key,int numeromossa);
tree_p insertline(tree_p t,int key,int numeromossa);
tree_p change(tree_p t, int start,int end, int mossa);
//DELETE//
tree_p deleteone(tree_p t,int key);
tree_p delete(tree_p t, int start, int end, int mossa);
//PRINT//
void printall(tree_p root,int key);
void print(tree_p t, int start, int end);
//UNDO//
tree_p undo_one(tree_p t,int key);
int undo(tree_p t, int num, int mossa);
//REDO//
void redo(tree_p t, int num);

//PADRE//////
tree_p padre(tree_p t,int key);
void wipe(tree_p t);

char *fgets(char *str, int n, FILE *stream);

int main() {
  int start,end,num,i=0,dim;
  char riga[MAX];
  char comando,carattere,termina;
  char *p=NULL;
  tree_p root=NULL;
  int mossa=0;


do{
    printf("inserire un comando \n");
    if(fgets(riga,MAX,stdin)!=NULL)
        dim=strlen(riga);

     p=&riga[0];
     i=0;
    start=atoi(riga);
      do{
        p=&riga[i];
        i++;
      }while(*p!=',' && *p!='u' && *p!='r' && *p!='q');
    sscanf(p,"%c",&carattere);

    if(carattere=='q'){
      break;
    }
    else if(carattere=='u'){
      mossa=mossa+1;
      printf("undo di %d righe \n", start);
    }
    else if(carattere=='r'){
      printf("redo di %d righe \n", start);

    }
    else if(carattere==','){
        p=&riga[i];
        end=atoi(p);
        do{
           p=&riga[i];
           i++;
         }while(*p!='c' && *p!='d' && *p!='p');
        sscanf(p,"%c",&comando);

    /*    printf("start: %d\n",start);
        printf("%c\n",carattere);
        printf("end: %d\n",end);
        printf("%c\n",comando); */

        if(comando=='c'){
          mossa=mossa+1;
          root=change(root,start,end,mossa);
        //  printf("righe tra %d e %d cambiate \n",start,end);
        }
        else if(comando=='d'){
          mossa=mossa+1;
          root=delete(root,start,end,mossa);
        //  printf("righe tra %d e %d cancellate \n",start,end);
        }
        else if(comando=='p'){
          print(root,start,end);
          //printf("righe tra %d e %d stampate \n",start,end);
        }
      }
    }while(dim>1);

     wipe(root);
     root=NULL;

     return 0;
   }

  void wipe(tree_p t){
    if(t==NULL)
    return;

    wipe(t->left);
    wipe(t->right);
    free(t);

  }



/////PRINT////////

void print(tree_p t, int start, int end){
  int i=0;

  for(i=start;i<=end;i++){
    printall(t,i);
  }
}


  tree_p create_node(tree_p t,int key,int numeromossa){
    int dim=0;
    char line[MAX];
    char carattere;

      t=(tree_p)malloc(sizeof(struct tree));
      t->key=key;
      t->left=NULL;
      t->right=NULL;
      t->stato=1;
      t->mossa=numeromossa;
      if(fgets(line,MAX,stdin)!=NULL){
        dim=strlen(line);
          sscanf(line,"%c",&carattere);
          if(carattere=='.')
            return NULL;
         t->riga=line;
       }

      return t;
  }

   tree_p insertline(tree_p t,int key,int numeromossa){
     tree_p temp,el;
     int dim=0;
     char line[MAX];
     char carattere;

       if(t!=NULL){
           if(key>=t->key){    //se c'è già un nodo con la chiave uguale lo inserisce lo stesso, ma devo fare in modo che quello precedente abbia stato deleted
               t->right=insertline(t->right,key,numeromossa);
           }
           else if(key<t->key){
               t->left=insertline(t->left,key,numeromossa);
           }
           else if(t->key==key && t->right->key!=key){
               temp=t->right;
               t->stato=2;
               el=(tree_p)malloc(sizeof(struct tree));
               t->right=el;
               el->key=key;
               el->left=NULL;
               el->right=temp;
               el->stato=1;
               el->mossa=numeromossa;
               if(fgets(line,MAX,stdin)!=NULL){
                 dim=strlen(line);
                   sscanf(line,"%c",&carattere);
                   if(carattere=='.')
                     return NULL;
                  el->riga=line;
                }
             }
             else if(key==t->key && t->right!=NULL){
               t->stato=2;
               t->right=insertline(t->right,key,numeromossa);
             }
           }
       else if(t==NULL){
           t=create_node(t,key,numeromossa);
       }
       return t;
   }

   ////CHANGE////

   tree_p change(tree_p t, int start,int end,int mossa){
   int i=0;
   tree_p temp;
   temp=t;

      if(mossa==1 && start>1){
        end=end-start+1;
        start=1;
      }

       for(i=start;i<=end;i++){
               t=insertline(t,i,mossa);

               printf("ho inserito la riga\n");

        }
    /*    while(t->right!=NULL){
          if(t->key==i && t->stato==1){
            t->stato=2;
            t=t->right;
          }
        }
        */
       return t;
   }

  //stampa una riga
void printall(tree_p root,int key){
  struct tree *temp, *prec;
  int i=0;
  temp=root;


    if(root==NULL){
       printf(".\n");
       return; }

      while(temp!=NULL){
          if(temp->left==NULL){
             if(key==temp->key)
               printf("%s\n",temp->riga);

             temp=temp->right;
          }
          else{
              prec=temp->left;
              while(prec->right!=NULL && prec->right!=temp){
                  prec=prec->right;
                }
              if(prec->right==NULL){
                  prec->right=temp;
                  temp=temp->left;
              }
              else{
                  prec->right=NULL;
                  if(key==temp->key)
                    printf("%s\n ",temp->riga);
                  temp=temp->right;
              }
           }
         }
  }

   //DELETE//

   tree_p deleteone(tree_p t,int key){
    if(key==t->key){
        t->stato=3;
      }
    else if(t==NULL)
    return t;
    else{
        if(key>t->key){
          t->right=deleteone(t->right,key);
        }
        else if(key<t->key){
          t->left=deleteone(t->left,key);
        }
     }
     return t;
   }


 tree_p delete(tree_p t,int start, int end, int mossa){
       int contatore;
       int i=0;

       for(i=start;i<=end;i++){
          t=deleteone(t,i);
       }
       //printf("testo tra le righe %d e %d cancellato\n",start,end);
   }
