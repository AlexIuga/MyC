//struct


#include<stddio.h>
#include<string.h>

typedef char htag[280];

typedef struct{
  char testo[281];
  char account[51];
  htag tags[100];
  int ntag;
}tweet;

float analizza(tweet collezione[], int n, char tag[])
{
  int trovato=0, i, j;
  float risultato=0;

  for(i=0;i<n;i++)
  {
    if(strlen(collezione[i].testo)<=140 && trovato==0)
    {
      for(j=0;j<collezione[i].ntag;j++)
         if(strcmp(collezione[i].tags[j],tag)==0)
         trovato=1;
      risultato=risultato+trovato;
    }
  }

  return risultato/n;
}
