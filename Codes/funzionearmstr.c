//un numero è di Armstrong se la somma delle
// sue tre cifre al cubo da il numero stesso.
//371 : 3^3=27 + 7^3=343 + 1^3=1 == 371

#include <stdio.h>

int arm(int a);

int main(){
int x,originale;

  printf("iserire un numero di tre cifre: \n");
  scanf("%d",&x);

  originale=x;
  x=arm(x);

  printf("la somma dei cubi delle cifre è %d \n\n",x);

  if(originale==x){
    printf("quindi il numero %d è un numero di armstrong\n\n",originale);
  }
  else{
    printf("il numero %d non è un numero di armstrong\n\n",originale);
  }

return 0;
}

int arm(int a){
  int p,s,t;
  p=a/100;
  s=(a-(p*100))/10;
  t=a-(p*100)-(s*10);

  return (p*p*p)+(s*s*s)+(t*t*t);
}
