#include<stdio.h>
#include<string.h>


int read(FILE *fin, char matrix[9][13]);
int check(FILE *fin);


int main()
{
FILE *fin;
char matrix[9][13];
char nome_file[26];
do{
scanf("%s",nome_file);
}while(strlen(nome_file)>26);

/*creare la matrice*/



return 0;
}


int read(char nome_file, int matrix[9][13])
{
  FILE *fin;
  /*lettura file */
  fin=fopen(nome_file, "r");
  if( fin==NULL ) {
    perror("Errore in apertura del file");
    exit(1);
  }
  for(int i=0;i<9; i++){
      for(int j=0;j<13;j++){
          fputc(c,fin);
      }
  }

}
