//Scrivere un programma che, data una stringa in input, la stampi a schermo al
//contrario. Far ciò senza fare uso dell’operatore [].
#include<stdio.h>
#include<string.h>
#define MAX 30

int main(){
  char stringa[MAX];
  printf("inserire una stringa \n");
  scanf("%s",stringa);

  for(int i=0;i<strlen(stringa);i++){
    *(stringa+i)=*(stringa+strlen(stringa)-i+1);
  }

  printf("%s \n",stringa);
  return 0;
}
