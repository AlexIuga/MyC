//

#include<stdio.h>
#define DIM 30
#include<string.h>

int main()
{
char messaggio[DIM];
char inverso[DIM];
int i,dim;

printf("inserire un messaggio \n");
scanf("%[^\n]",messaggio);

dim=strlen(messaggio);

   for(i=0;i<dim;i++){
     inverso[i]=messaggio[dim-1-i];
   }


printf("il messaggio al contrario è %s \n", inverso);

return 0;
}
