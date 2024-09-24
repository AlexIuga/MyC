//Data una stringa s ed un carattere c (i due soli parametri della funzione),
//calcolare le occorrenze dicins, ovvero quante volte c compare in s
#include<stdio.h>
#include<string.h>

int conta_ricorrenze(char s[], char c){
int,dim;
dim=strlen(s);
//casi base
  if(dim==0)
  return 0;
  //caso generale
  else{
    return (s[0]==c)+conta_ricorrenze(s+1,c);
}
