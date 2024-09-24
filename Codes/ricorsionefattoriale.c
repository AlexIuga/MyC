//funzioni ricorsive

//caso base
//devo ridurre i parametri di ingresso dopo quando richiamo la funzione
//cosi riesco ad arrivare al caso base.

//somma
#include<stdio.h>
int somma(int n){

 if(n==1)
  return n;

 else
 return n+(somma(n-1));
}


//funzione fattoriale

int fattoriale(int n)
{
  //caso base
  if(n==1)
    return 1;
  else
    return n*(fattoriale(n-1));
}

int fattoriale2(int n){      //non ricorsiva
 int fatt;
 fatt=n;
  for(int i=1;i<n;i++){
    fatt=fatt*i;
  }
  return fatt;
}

int main()
{
  int n,risultato;
  n=5;
  risultato=somma(n);
  printf("la somma è %d\n\n",risultato);
  risultato=fattoriale(n);
  printf("il fattoriale è %d\n\n",risultato);
  risultato=fattoriale2(n);
  printf("il fattoriale non ricorsivo è %d\n\n",risultato);
}
