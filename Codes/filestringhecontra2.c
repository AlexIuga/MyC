//Si scriva una funzione che legge da un ﬁle, passato come parametro, un insieme
//di stringhe, di lunghezza variabile e terminate da \0, e le scrive a schermo al
//contrario, ovvero da destra verso sinistra. Ogni stringa ` e lunga non pi`u di
//30 caratteri; il ﬁle `e terminato dal carattere speciale EOF.
#include<stdio.h>
#include<string.h>
#define MAX 30

void leggiStringhe(FILE in){
  char s[MAX];
  int i=0;
  //file già aperto
  while(!feof){
    do{
      s[i]=fgetc(in);
      if(s[i]!='\0' && s[i]!=' ')
      break;
      i++;
    }while(1);
    for(int j=i;i>0;j++){
      printf("%c",s[j]);
    }
    i=0;
    printf("\n");
  }
}
