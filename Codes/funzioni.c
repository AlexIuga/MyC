#include <stdio.h>
#include <math.h>     //gcc -l

double P(double a);
double R(double b);
double S(double x, double y);


int main()
{
  double m,n,q;
  double risultato;
  printf("inserire due valori \n\n");
  scanf("%lf""%lf",&m,&n);

  /*q=n-m;
  q=R(q);
  n=P(n);*/
risultato=S(P(n),R(n-m));

  printf("il risultato è %lf \n",risultato);

return 0;
}

double P(double a){
  a=(a*a*a)+(a*a)+sin(a);              //funzione: P(a)=a^3+a^2+sin(a)
  return a;
}

double R(double b){                     //funzione R(b)
  b=sqrt(b*b+12);
  return b;
}

double S(double x, double y){          //funzione S(x,y)
  return (13*x)+((x+y)/3);
}
