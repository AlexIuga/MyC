#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1028

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
    char* riga;       //puntatore alla stringa da inserire
    tree_p right;       //puntatore a figlio destro
    tree_p left;             //puntatore a figlio sinistro
    int mossa;     //variabile che conta l'ordine delle mosse.
    int stato;
};

/////FUNZIONI//////

//CHANGE//
tree_p create_node(tree_p t,int key,int numeromossa);
tree_p insertline(tree_p t,int key,int numeromossa);
tree_p change(tree_p t, int start,int end, int mossa);

/////DELETE//
tree_p deleteone(tree_p t,int key,int mossa);
tree_p delete(tree_p t, int start, int end, int mossa);

//PRINT//
void printrecursive(tree_p t,int key);
void print(tree_p t, int start,int end);
tree_p printsearch(tree_p t, int key);

//FREE//
void wipe(tree_p t);

char *fgets(char *str, int n, FILE *stream);

int main() {
  int start,end,num,i=0,dim;
  char riga[MAX];
  char comando,carattere,termina;
  char *p=NULL;
  tree_p root=NULL;
  int mossa=0;
  char punto,line[MAX];


do{
    //printf("inserire un comando \n");
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
      //printf("undo di %d righe \n", start);
    }
    else if(carattere=='r'){
      mossa=mossa+1; //DATOGLIERE
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


        if(comando=='c'){
          mossa=mossa+1;
          root=change(root,start,end,mossa);

          if(fgets(line,MAX,stdin)!=NULL){
            dim=strlen(line);
            sscanf(line,"%c",&carattere);}
        //  printf("righe tra %d e %d cambiate \n",start,end);
        }
        else if(comando=='d'){
            mossa=mossa+1;
            root=delete(root,start,end,mossa);
        }
        else if(comando=='p'){
            print(root,start,end);
        }
      }
    }while(comando!='q');


     return 0;
   }



  tree_p create_node(tree_p t,int key,int numeromossa){
    int dim=0;
    char line[MAX];
    char carattere;
    int lenght;

      t=(tree_p)malloc(sizeof(struct tree));
      t->key=key;
      t->left=NULL;
      t->right=NULL;
      t->stato=1;
      t->mossa=numeromossa;

      if(fgets(line,MAX,stdin)!=NULL){
        dim=strlen(line);
          t->riga=malloc(dim+10);
          sscanf(line,"%c",&carattere);
          if(carattere=='.')
            return NULL;
         strcpy(t->riga,line);
         //t->riga=line;

         lenght=strlen(t->riga);
         //printf("%d\n",lenght);
       }

      return t;
  }

  tree_p insert(tree_p t,int key,int numeromossa){
      if(t!=NULL){

          if(key==t->key && t->left==NULL){
            t->stato=2;
            //printf("!!!SONO QUI!!!\n");
            //printf("t->stato= %d\n",t->stato);
            t->left=insert(t->left,key,numeromossa);
          }
          else if(key==t->key && t->left!=NULL){
            t->stato=2;
            t->left=insert(t->left,key,numeromossa);
          }
          if(key>t->key){     //se c'è già un nodo con la chiave uguale lo inserisce lo stesso, ma devo fare in modo che quello precedente abbia stato deleted
            //  printf("!!!RIGHT!!!\n");
              t->right=insert(t->right,key,numeromossa);
          }
          else if(key<t->key){
            //  printf("!!!LEFT!!!\n");
              t->left=insert(t->left,key,numeromossa);
          }
      }
      else if(t==NULL){
          t=create_node(t,key,numeromossa);

          //printf("t->stato= %d\n",t->stato);
      }
      return t;
  }

  tree_p change(tree_p t, int start,int end,int mossa){
  int i=0;
  tree_p temp;

  if(t==NULL){
    return t;
  }
  else{
    temp=t;
  }

     if(mossa==1 && start>1){
       end=end-start+1;
       start=1;
     }
     temp=t;
      for(i=start;i<=end;i++){
          t=insert(t,i,mossa);
       }

      return t;
  }


  void print(tree_p t, int start, int end){
   int i=0;
   int key;
   tree_p temp=NULL;
   i=start;


   if(i==0){
     printf(".\n");
     return;
   }

   for(i;i<=end;i++){
     temp=printsearch(t,i);
     if(temp==NULL || temp->stato==2 || temp->stato==3){
       printf(".\n");
      }
     else if(temp->stato==1 || temp->stato==4){
       printf("%s",temp->riga);
     }
   }
   return;
 }

 tree_p printsearch(tree_p t, int key){
   if(t==NULL){
     return t;
   }
   else if(t->key==key){
     if(t->left==NULL)
     return t;
     else if(t->left!=NULL){
       return printsearch(t->left,key);
     }
   }
   else if(t->key<key){
     return printsearch(t->right,key);
   }
   else{
     return printsearch(t->left,key);
   }
 }
/*
  void print(tree_p t, int start, int end)
  {
     if(t==NULL){
       printf(".\n");
        return;
    }

     if(start<t->key || (start==t->key && t->stato==2))
       print(t->left,start,end);

     else if(start<=t->key && end>=t->key)
       printf("%s",t->riga);

     else if(end>t->key)
       print(t->right,start,end);
  }
*/


/////DELETE/////

tree_p deleteone(tree_p t,int key, int mossa){
    if(t!=NULL){
      deleteone(t->left,key,mossa);

      if(t->key==key && t->stato==1){
        t->stato=3;
        t->mossa=mossa;
      }
      deleteone(t->right,key,mossa);
    }

    return t;

  }

  tree_p delete(tree_p t,int start, int end, int mossa){
     int i=0;
     i=start;

     if(i==0){
       return t;
     }

    for(i;i<=end;i++){
      t=deleteone(t,i,mossa);
    }

    return t;
  }
