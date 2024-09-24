//Scrivere una funzione C che prende in ingresso un file (di caratteri) e restituisce
//il carattere nel mezzo del file.Ad esempio, se il file contenesse75caratteri,
//la funzione dovrebbe restituire il carattere in posizione 38. Se il numero di
//caratteri fosse pari, la funzione dovrebbe restituire il primo della coppia centrale.
//In altre parole,se il file contenesse 10 caratteri, la funzione dovrebbe restituire il carattere in posizione5.
//Il file (puntatore a file) e l’unico parametro che deve avere la funzione
#include<stdio.h>

char mezzo(FILE *f){
  int pos;
  char c;
  //file presumibilmente già aperto
  //contare i caratteri del file
  if(fseek(f,0,SEEK_END)==0){
    pos=ftell(f);
  }
  //trovare il carattere centrale
   if(fseek(f,(pos-1)/2,SEEK_SET)==0){
     fread(&c,sizeof(char),1,f);
     return c;
   }
  //restituirlo
  return c;
}

//oppure

char mezzo(FILE *f)
{
  int conta=0;
  char c;

  while(feof(f)!=0){
    if(fgetc(f)!=EOF){
       conta++;
    }
  }
  conta=conta/2;

  if(fseek(f,conta,SEEK_SET)==0){
    c=fgetc(f);
  }
  return c;
}
