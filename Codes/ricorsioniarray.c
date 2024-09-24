//

#include <stdio.h>

int fun(int a[], int b){
  int risultato;

//casi base array vuoto,uno e due ritorniamo 1
   if(b==1 || b==2)
    return 1;
   else if(b==3)
    return a[0]*a[2]=a[1];
  //caso generale
risultato=fun(a+1,b-2);
  if(ris==0)
  return risultato;

  else
  return a[0]+a[b-1]==a[1]+a[b-2];
}

int main(){

int a[5]={1,4,6,2,5}, b[4]={1,3,4,5};

printf("fun(a)=%d, fun(b)=%d\n",fun(a,5),fun(b,4));

return 0;
}
