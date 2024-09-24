#include <stdio.h>

int somma(const int v[],int n);   //per evitare di modificare l'indirizzo dell'array

int main(){
  int x;
  int *p1=&x;
  const int *p2=&x;         //const crea un puntatore costante(senza poterlo modificare )

  *p1=5;
  printf("%d\n",*p2);

  *p2=3;  //errore -> il puntatore p è costante.


return 0;
}

int somma(const int v[],int n){
  
}
