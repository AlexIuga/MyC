//f1 contiene una sequenza di interi e la funzione deve scrivere in f2
//i numeri pari della sequenza contenuta in f1 in ordine inverso


#include<stdio.h>

void fun(FILE *f1,FILE *f2)
{
  int x,r;
  r=fseek(f1,-sizeof(int),SEEK_END);
  if(r!=0)
    return;

  while(r==0){                      
  fread(&x,sizeof(int),1,f1);
  if(x%2==0)
    fwrite(&x,sizeof(int),1,f2);

  r=fseek(f1,-2*sizeof(int),SEEK_CUR);
  }

}



int main()
{

}
