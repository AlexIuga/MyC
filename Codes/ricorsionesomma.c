//Scrivere in C una funzione ricorsiva int fun(int a[], int d) che restituisce 1
//se le coppie di elementi opposti (primo e ultimo, secondo e penultimo, ecc.)
//dell’array hanno somma costante; restituisce 0 altrimenti.Ad esempio,  se fosse
//a= 3,4,1,  la funzione dovrebbe restituire 1,  mentre se fosse a= 3,2,1,1
//dovrebbe restituire 0.Si noti che se la lunghezza dell’array fosse dispari
//l’elemento centrale farebbe coppia da solo e non si sommerebbe con niente.

#include<stdio.h>

int fun(int a[], int d){
  //caso base
  if(d==0)
   return;
  if(d==1 || d==2)
    return 1;
    //caso generale
  else{
    return (a[0]+a[d])==fun(a+1,d-1);
  }
}
