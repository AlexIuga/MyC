#include<stdio.h>
#include<string.h>
#define DIM 100

int main()
{
char stringa[DIM];
int i,dim;

printf("inserire una sequenza di lettere minuscole \n");
scanf("%[^\n]",stringa);

dim=strlen(stringa);

  for(i=0;i<dim;i++){
      switch(stringa[i]){
          case 'a': stringa[i]='A';
                   break;
          case 'e': stringa[i]='E';
                   break;
          case 'i': stringa[i]='I';
                   break;
          case 'o': stringa[i]='O';
                   break;
          case 'u': stringa[i]='U';
                   break;
       }
    }

printf("evidenziando le lettere minuscole: %s \n",stringa);

return 0;
}
