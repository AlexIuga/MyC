#include<stdio.h>
#include<string.h>
#define MAX 1024

typedef enum {deleted,undone,good}stato;

struct line{
  int n;
  stato stampalibera;
};
//funzioni
//CHANGE//
void change(int start,int end){
  printf("testo tra le righe %d e %d modificato\n",start,end);
}
//DELETE//
void delete(int start, int end){
  printf("testo tra le righe %d e %d cancellato\n",start,end);
}
//PRINT//
void print(int start, int end){
  printf("testo tra le righe %d e %d stampato\n",start,end);
}


int main() {
  int start,end,i=0,num;
  char riga[MAX];
  char control[3];
  char *comando,*virgola;

  do {
      printf("inserire un comando \n");
      scanf("%d",&start);
      scanf("%c",virgola)
      scanf("%d",&end);
      scanf("%c",comando);
   //
         printf("%d\n",start);
         printf("%d\n",end);
         printf("%c\n",*comando);

           if(comando == "c")
              change(start,end);
           else if(comando == "d")
              delete(start,end);
           else if(comando == "p")
              print(start,end);

    }while(comando!="q");  //comando q termina le istruzioni
  return 0;
}
