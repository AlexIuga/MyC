//funzione ricorsiva che inverte una sequenza terminata da uno zero.

#include<stdio.h>

void stampaContra(void){
  char c;
  scanf("%c",&c);
  if(c!=0){
    stampaContra();
    printf("%c",c);
    printf("\n");
  }
}
