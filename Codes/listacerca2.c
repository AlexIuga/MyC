//
#include<stdio.h>
#include<stdlib.h>

int cerca(lista l, int el){

  if(l==NULL || l->el==el)
    return 0;
  else
    return 1+cerca(l->next,el);
}
