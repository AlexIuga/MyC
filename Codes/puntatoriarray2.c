//che riceve in ingresso un vettore v di lunghezza n e lo inverte, in modo che
//l’ultimo elemento di v diventi il primo, il penultimo diventi il secondo e così via.
//Si implementi  una funzione in grado di invertire il vettore v senza crearne
//una copia e senza utilizzare un ulteriore variabile array a supporto.

#include<stdio.h>

void inverti(int v[], int n)
{
  int a[n];

  for(int j=0;j<n;j++)
     a[j]=v[j];

  for(int i=0;i<n;i++)
  {
    *(v+i)=*(a+(n-1)-i);
  }
}

int main()
{
  int v[5]={1,2,3,4,5};

 inverti(v,5);

  for(int i=0;i<5;i++)
  printf("%d ",v[i]);
  printf("\n");

  return 0;
}
