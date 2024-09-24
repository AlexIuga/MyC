//Implementare in C la funzione ricorsiva int trova_somma (int somma, int v[], int n)
//che riceve in ingresso un vettore v di lunghezza n e restituisce 1 se il vettore v contiene
//uno o più elementi che sommati insieme hanno valore pari al parametro somma, viceversa restituisce 0.
#include<stdio.h>

int trova_somma(int somma,int v[],int n){
  int ris;
  //caso base
  if(n==0)
  return 0;
if(n==1){
  for(int i=0;i<n;i++){
    if(v[i]==somma)
     return 1;
    else{
      ris=trova_somma(somma-v[i],v+i+1,n-i-1);
      if(ris==1)
        return 1;
      else
      return 0;
    }
  }
}
