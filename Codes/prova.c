#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1025

typedef struct tree* tree_p;


struct tree{
    int key;          //la chiave è il numero della riga
    char *riga;       //puntatore alla stringa da inserire
    tree_p right;       //puntatore a figlio destro
    tree_p left;             //puntatore a figlio sinistro
    int priority;
};

 tree_p create_node(int key);
 void MorrisTraversal(struct tree * root);
 tree_p BST_insert_iterative(tree_p root, int start,int end);

int main(){
  int start,end,num,i=0,dim;
  char riga[MAX];
  char comando,carattere,termina;
  char *p;
  tree_p root=NULL;
  int numeromossa=0;


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
      printf("undo di %d comandi \n", start);
    }
    else if(carattere=='r'){
      printf("redo di %d comandi \n", start);

    }
    else if(carattere==','){
        p=&riga[i];
        end=atoi(p);
        do{
           p=&riga[i];
           i++;
         }while(*p!='c' && *p!='d' && *p!='p');
        sscanf(p,"%c",&comando);

        printf("%d\n",start);
        printf("%c\n",carattere);
        printf("%d\n",end);
        printf("%c\n",comando);

        if(comando=='c'){
          root=BST_insert_iterative(root,start,end);
          printf("righe tra %d e %d cambiate \n",start,end);
        }
        else if(comando=='d'){

          printf("righe tra %d e %d cancellate \n",start,end);
        }
        else if(comando=='p'){
          MorrisTraversal(root);
          printf("righe tra %d e %d stampate \n",start,end);
        }
      }
    }while(dim>1);
     return 0;
   }

   tree_p create_node(int key) {
       tree_p n = calloc(1, sizeof(struct tree));
       int i=0,dim=0;
       char line[MAX];
       char carattere;

       n->key = key;
       n->priority=1;
       n->right=NULL;
       n->left=NULL;
       if(fgets(line,MAX,stdin)!=NULL){
         dim=strlen(line);
        // if(dim==1){
           sscanf(line,"%c",&carattere);
           if(carattere=='.')
             return NULL;
           n->riga=line;
          }
       return n;
   }

   tree_p BST_insert_iterative(tree_p root, int start,int end)
   {
     int i=0,dim=0;
     tree_p temp = root;
     int condition = 1;
     int data=0;

     for(data=start;data<=end;data++){
       condition=1;

       if (root == NULL)
           return create_node(data);

       while (condition)
       {
           if (data > temp->key)
           {
               if (temp->right == NULL)
               {
                   temp->right = create_node(data);
                   condition = 0;
               }
               else
                   temp = temp->right;
           }
           else
           {
               if (temp->left == NULL)
               {
                   temp->left = create_node(data);
                   condition = 0;
               }
               else
                   temp = temp->left;
           }

       }
     }

       return root;
   }

   void MorrisTraversal(struct tree * root)
   {
       struct tree *current, *pre;

       if (root == NULL)
           return;

       current = root;
       while (current != NULL) {

           if (current->left == NULL) {
               printf("%d. %s\n", current->key,current->riga);
               current = current->right;
           }
           else {

               /* Find the inorder predecessor of current */
               pre = current->left;
               while (pre->right != NULL && pre->right != current)
                   pre = pre->right;

               /* Make current as the right child of its inorder
                  predecessor */
               if (pre->right == NULL) {
                   pre->right = current;
                   current = current->left;
               }

               /* Revert the changes made in the 'if' part to restore
                  the original tree i.e., fix the right child
                  of predecessor */
               else {
                   pre->right = NULL;
                   printf("%d. %s\n ", current->key,current->riga);
                   current = current->right;
               } /* End of if condition pre->right == NULL */
           } /* End of if condition current->left == NULL*/
       } /* End of while */
   }
