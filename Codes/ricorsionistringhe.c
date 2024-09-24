//scrivere una funzione che data una stringa s ed un carattere c
//calcolare le occorrenze di c in s

#include <stdio.h>
#include <string.h>
#define MAX 100

int conta_occorrenze(char str[], char c){
int m;
    if(strlen(str)==0)
      return 0;
    else{
      if(str[0]==c)
        return 1 + conta_occorrenze(str+1, c);
      else
        return conta_occorrenze(str+1,c);
    }
}

int main()
{
char str[MAX];
char c;
int occorrenze;
   printf("inserire un testo \n\n");
   scanf("%[^\n]",str);

 printf("inserire il carattere da cercare  \n\n");
  scanf("%*c%c",&c);

occorrenze=conta_occorrenze(str,c);

   printf("la lettera %c appare %d volte \n\n", c,occorrenze);


return 0;
}
