//scrivere in c una funzione void fun(FILE *f1, FILE *f2) che ha in input due puntatori
//a file, il primo testuale(scrittura) il secondo binario(lettura)
//che contiene una sequenza di coppie di valori interi v1 e v2
//v1 rappresenta la codifica ASCII del carattere da scrivere in f2 e v2 il numero
//di volte cge l'operazione deve essere ripetuta, ovvero quanti caratteri v1 devono
//essere scritti in v2. Le diverse sequenze v2 caratteri v1 devono essere separate tra loro
//da uno spazio.


/*     f1 contiene  97 3 98 5
       f2 diventa aaa bbbbb         */

#include<stdio.h>

void fun(FILE *f1, FILE *f2);

int main()
{



return 0;
}

void fun(FILE *f1, FILE *f2)
{
  int v[2];                                //array di due interi per ospitare
  int i;

   while(feof(1)!=0)                         //finchè non sono alla fine del file
 {
  //leggo due interi, v1 e v2
  if (fread(v,sizeof(int),2,f1) !=2)
      return;   //errore

  //scrivo il carattere v1 (v[0]) per v2(v[1]) volte nel file v2
  for(i=0;i<v[1];i++){
    fputc(v[0],f2);
    fputc(" ",f2);    //stampa lo spazio
  }

}


// se invece dei puntatori ai file ho in entrata i nomi dei file

/*
void fun(char *f1, char *f2)
{
  FILE *in, *out;
  in=fopen(f1, "rb");
       if(in==NULL)
        return;
  out=fopen(f2,"w")
      if(out==NULL)
      return;
} */
