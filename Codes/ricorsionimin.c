//scrivere una funzione ricorsiva min che riceve in ingresso un vettore v di float
//la lunghezza n del vettore, e restituisce il valore più piccolo del vettore v

#include <stdio.h>

float min(float v[],int n){
  int i;
  if(n==1){                          //riduco l'array alla posizione più piccola
    return v[0];                    //dove il minimo è l'unico elemento
  }
  else{
    float m = min(v+1,n-1)       //min(array che parte da x1 e termina in xn)
    if(m<v[0]){
      return m;
    }
  }                                        

}

int main(){

  float v[5]={4.3,0.5,3.4,-2.0,7.3};
  printf("il minimo è %f \n", min(v,5));

return 0;
}
