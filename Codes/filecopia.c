//Scrivere un programma che legge un file testuale (lettura.txt) e legge da
//terminale un numero interno n positivo. Quindi salva in un file (output.txt)
//le prime n righe del file letto in precedenza.


#include<stdio.h>
#define N 100
int main()
{
  int n,verifica;
  FILE *f1;
  FILE *f2;
  char stringa[N];

  if((fopen("lettura.txt","r")!=NULL))
  f1=fopen("lettura.txt","r");                    //acapo ==>    cat nomefile.txt

  printf("scrivere il numero di righe da copiare \n");
  scanf("%d",&n);

  f2=fopen("output.txt","w");

  for(int i=0;i<n;i++)
  {
   if(fgets(stringa,N,f1)!=NULL)
   verifica=fputs(stringa,f2);
  }
//chiudo f1
  if(fclose(f1)!=0){
    printf("chiusura non eseguita \n");
  }

  if(verica!=EOF)
  printf("successo\n");

  if(verifica==EOF)
    printf("errore \n");
//chiudo f2
  if(fclose(f1)!=0){
      printf("chiusura non eseguita \n");
    }

  return 0;
}
