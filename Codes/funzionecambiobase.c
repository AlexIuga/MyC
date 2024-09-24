#include<stdio.h>
#include<math.h>

void cambiobase(int n, int base){
  int cifre=0,supp,risul;
  supp=n;


  do{
    supp=supp%10;
    cifre++;
  }while(supp>0);

if(base<10){
  for(int i=0;i<cifre;i++){
    n=(n%base)*(pow(10,i));
    risul=risul+n;
    n=n/base;
  }
  printf("il numero %d in base %d è %d \n", n,base,risul);
}

}


int main(){
  int x,y,base1,base2;
  x=35;
  y=27;

  base1=2;
  base2=8;

  cambiobase(x,base1);
  cambiobase(y,base2);
}
