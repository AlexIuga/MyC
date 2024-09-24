//anno bisestile

#include <stdio.h>

int main()
{

int anno ;
  printf("inserire anno\n");
  scanf("%d", &anno);

  if(anno%4==0 && anno%100!=0){
  printf("l'anno %d è bisestile \n", anno);
  }

  else if(anno%100==0 && anno%400!=0){
  printf("l'anno %d è secolare \n", anno);
  }

  else{
  printf("l'anno %d non è bisestile \n", anno);
  }
}
