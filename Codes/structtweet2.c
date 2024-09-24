//
#include<stdio.h>
#define MAX_TESTO 281
#define MAX_ACCOUNT 51

typedef char htag[179];

typedef struct messaggio{
  char testo[MAX_TESTO];
  htag htags[100];
  int nTag;
  char account[MAX_ACCOUNT];
}tweet;

float analizza(tweet collezione[], int n, char hashtag[]){
float conta=0;

  for(int i=0;i<n;i++){
    for(int j=0;j<100;j++){
     if(strcmp(hastag,collezione[i].htags[j])==0 && strlen(collezione[i].testo)<140){
       conta++;
     }
    }
  }
  return conta/n;
}
