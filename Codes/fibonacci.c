/* sequenza di Fibonacci : F(n)=F(n-1) + F(n-2)
   F(0)=1 F(1)=1    */

#include<stdio.h>

int main()
{
unsigned int n,i,risultato,prec;
printf("inserire un numero \n");
scanf("%u", &n);

if(n==0)
  risultato=1;

if(n==1)
  risultato=1;

else{
  for(i=0;i<n;i++){
    prec=i-1;
    risultato=prec+(prec-1);
  }
}

printf("il risultato è %u \n\n",risultato);

return 0;
}
