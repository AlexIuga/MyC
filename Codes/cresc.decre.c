#include <stdio.h>

int main()
{
int x,crescente=1,decrescente=1,prec,i;
printf("inserisci una sequenza terminata da zero \n\n");

  do{
    scanf("%d",&x);
      if(x==0)
        break;
    i++;

  if(i>1)
  {
    if(x>=prec)
      decrescente=0;
    else if(x<=prec)
      crescente=0;

  }
  prec=x;

  }while(1);
  
if(i<1){
  crescente=0;
  decrescente=0;
}

if(crescente==1)
  printf("la sequenza è crescente \n");
else if(decrescente==1)
  printf("la sequenza è decrescente \n");
else
  printf("la sequenza non è ne crescente ne decrescente\n");


return 0;
}
