//La	funzione	riceve	in	ingresso	due	numeri	interi	x	e	y	(con	x>=0	e	y>0),
//quindi	calcola	e	restituisce	il	resto	della	divisione	intera	x/y.
#include<stdio.h>

int resto(int x,int y){
  if(x==0 || y==0)
  return 0;

  if(x<y)
   return x;
  else
   return resto(x-y,y);
}
