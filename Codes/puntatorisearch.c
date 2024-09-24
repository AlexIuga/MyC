//implementare una funzione ricorsiva binary_search con il seguente prototipo
//  int binary_search(int v[], int elem, int a, int b)
// v è un array ordinato, a e b sono posizioni valide con a<b;
//la funzione deve cercare v contiene il valore elem, in caso positivo
//ne restituisce la posizione, in caso negativo restituisce -1;


#include<stdio.h>
#define N 5

int binary_search(int v[], int elem, int a, int b){
  if(v[a]==elem && a<=b){
    return a;
  }
  else if(a<=b){
    return binary_search(v, elem, a+1, b);
  }
  else if(a>=b){
    return -1;
  }
}

int main()
{
int array[N];
int elem,i;
int a,b, posizione;

printf("inserire i valori dell'array \n");

for(i=0;i<N;i++){
  scanf("%d",&array[i]);
}

printf("inserire l'elemento che si vuole cercare \n");
scanf("%d",&elem);

printf("inserire le posizioni tra cui si vuole cercare \n");
scanf("%d""%d",&a,&b);

posizione=binary_search(array,elem,a,b);

printf("la posizione dell'elemento %d è %d \n", elem,posizione);

return 0;
}
