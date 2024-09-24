//Dati due numeri interi in ingresso,stabilire se il primo numero `e una potenza
//del secondo. Ad esempio, se i parametri fossero 81 e 3, la risposta sarebbe
//positiva; mentre con 100 e 5, la risposta dovrebbe essere negativa. Se il primo
//parametro fosse pi`u piccolo del secondo, la risposta sarebbe chiaramente negativa.

#include<stdio.h>

int potenza(int a, int b){
  if(a==0 || b==0)
  return 0;
  //caso base
  if(a==b)
  return 1;
  if(a<b)
  return 0;

  else
   return potenza(a/b,b);
}
// Dati due numeri interi in ingresso, stabilire se i due numeri sono primi tra
//loro. Ovvero, se esiste un divisore comune diverso da 1,i due numeri non sono
//primo tra loro; lo sarebbero in caso contrario

int primi_ric(int a,int b){
  if(a==b)
  return 0;
  else{
    if(a>b)
    return primi_ric(a-1,b);
    else
    return primi_ric(a,b-1);
  }
}
