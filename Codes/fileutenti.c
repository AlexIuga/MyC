//Scrivere	un	programma	C	che	apre	un	file	testuale	contenente	una	lista
//di	codici	utenti	(uno	per	riga)	e	trascrive	in	un	altro	file	testuale
//solo	i	codici	utente	che	hanno	un	formato	corretto	(uno	per	riga).I	nomi
//di	entrambi	i	file	devono	essere	acquisiti	da	tastiera	(al	più	50	caratteri).
//Un	codice	utente	è	valido	se	è	una	sequenza	di	10	caratteri	in	cui	i
//primi	6	caratteri	sono cifre	ed	i	successivi 4	caratteri sono lettere	maiuscole.

#include<stdio.h>
#include<string.h>
#define MAX 50
#define DIM 12

int controlla(stringa[DIM]);

int main(){
  FILE* in,out;
  char nomefile[MAX];
  char stringa[DIM];
  int corretto;
  //prendo il nome del file
  scanf("%s",nomefile);
  in=fopen(nomefile,"r");
  out=fopen("utenticorretti.txt","w+");
  //
  while(!feof){
    if(fgets(stringa,DIM,in)!=NULL){
      corretto=controlla(stringa);
      if(corretto==1)
      fputs(stringa,out);
    }
  }
  fclose(in);
  fclose(out);
  return 0;
}
int controlla(stringa[DIM]){
  int corretto=1;
  if(strlen(stringa)<10)
  corretto=0;

  for(int i=0;i<6;i++){
    if(stringa[i]<'0' || stringa[i]>'9')
      corretto=0;
  }
  for(int j=6;j<10;j++){
    if(stringa[i]<'A'|| stringa[i]>'Z')
     corretto=0;
  }
  return corretto;
}
