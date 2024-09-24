//scrivere un programma che data in input una striga la stampi a schermo al contrario
//senza l'uso di []

#include<stdio.h>
#include<string.h>
#define N 100

int main()
{
char s[N], inv[N];
int dim,i;

printf("inserire un testo \n");
scanf("%[^\n]",s);

dim=strlen(s);

for(i=0;i<dim;i++){
  *(inv+i)=*(s-i+dim-1);
}

for(i=0;i<dim;i++)
 printf("%c",*(inv+i));

 printf("\n");


return 0;
}
