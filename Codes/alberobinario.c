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

tree_p insert(tree_p t,int key,char *line);
void in_order(tree_p t,int key);
tree_p cerca(tree_p t,int key);
void MorrisTraversal(struct tree * root);
void printall(tree_p root,int start,int end);
tree_p create_node(int key,char *line);
tree_p BST_insert_iterative(tree_p root, int nodo, char *line);



int main(){
tree_p root=NULL;
int numero,dim;
char riga[MAX];

  for(int i=0;i<3;i++){
    printf("inserire la riga desiderata \n");
    if(fgets(riga,MAX,stdin)!=NULL)
       dim=strlen(riga);
     root=BST_insert_iterative(root,i,riga);
    }


    printf("\n\nSTAMPA DELL'ALBERO\n");
    MorrisTraversal(root);

return 0;
}

tree_p insert(tree_p t,int key,char *line){
    if(t!=NULL){
        if(key>t->key){     //se c'è già un nodo con la chiave uguale lo inserisce lo stesso, ma devo fare in modo che quello precedente abbia stato deleted
            t->right=insert(t->right,key,line);
        }
        else if(key<t->key){
            t->left=insert(t->left,key,line);
        }
    }
    else if(t==NULL){
        t=(tree_p)malloc(sizeof(struct tree));
        t->riga=line;
        t->left=NULL;
        t->right=NULL;
        t->priority=1;
        t->key=key;
        printf("sono nella insertline \n");
    }
    return t;
}


void in_order(tree_p t,int key){
  if(t!=NULL){
    in_order(t->left,key);
    if(t->priority==1 && t->key==key)
    printf("%d. %s\n",t->key,t->riga);

    in_order(t->right,key);
  }
}

void printall(tree_p root,int start,int end){
  struct tree *current,*pre;
  int i=0;

  i=start;

  if(root==NULL){
    return;
  }

  current=pre;

  while(current!=NULL && i==end){
    if(current->left!=NULL && current->key==i){
      printf("%d. %s\n",current->key,current->riga);
      current=current->right;
    }
    else{
      pre=current->left;
      while(pre->right!=NULL && pre->right!=current)
        pre=pre->right;

      if(pre->right==NULL){
        pre->right==current;
        current=current->left;
       }
      else{
        pre->right==NULL;
        if(current->key==i)
          printf("%d. %s\n",current->key,current->riga);
        current=current->right;
        }
      }
      i++;
    }
  }


  tree_p create_node(int key,char *line) {
      tree_p n = calloc(1, sizeof(struct tree));

      n->key = key;
      n->riga=line;
      n->priority=1;
      n->right=NULL;
      n->left=NULL;
      return n;
  }

  tree_p BST_insert_iterative(tree_p root, int data,char *line)
  {
      tree_p temp = root;
      int condition = 1;

      if (root == NULL)
          return create_node(data,line);

      while (condition)
      {
          if (data > temp->key)
          {
              if (temp->right == NULL)
              {
                  temp->right = create_node(data,line);
                  condition = 0;
              }
              else
                  temp = temp->right;
          }
          else
          {
              if (temp->left == NULL)
              {
                  temp->left = create_node(data,line);
                  condition = 0;
              }
              else
                  temp = temp->left;
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
