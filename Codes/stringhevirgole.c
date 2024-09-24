#include <stdio.h>
#include <string.h>
#define DIM 1000

int main()
{
char testo[DIM];
float i,contatore=0,n;
float media;


printf("inserire un testo con virgole al posto degli spazi \n");
scanf("%s",testo);

//numero di parole è numero di virgole + 1
for(i=0;i<strlen(testo);i++){
  if(testo[i]==',')
    contatore++;
}

n=contatore+1;
printf("il numero di parole inserito è %d \n",n);

//media di caratteri
media=(strlen(testo)-contatore)/n;
printf("la media dei caratteri è %f \n \n",media);
return 0;
}
