//Scrivere una funzione che ricevuto in ingresso un array a di interi, ed un
//valore c da cercare, ritorna un puntatore alla prima posizione dell’array
//contenente il valore c, oppure NULL se il valore non è presente.
//Si scriva poi un semplice programma per testare la funzione.
#include<stdio.h>

int* cerca(array[],int c){
  int i=0,z;
  do{
    z=array[i];
    if(z='\0')
     break;
    i++;
  }while(1);    //lunghezza dell'array

  //caso base
  if(i==1){
    if(a[0]==c)
    return a;
    else
     return NULL;
  }
  //caso generale
  else{
    return cerca(a+1,c);
  }
}
