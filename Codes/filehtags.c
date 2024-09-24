//
#include<stdio.h>
#include<string.h>
#define NOME 51
#define TAG 279

int main(){
FILE* in,out;
char nomein[NOME],nomeout[NOME],htag[TAG],s[TAG];
int conta=0,i=0;
  scanf("%s",nomein);
  scanf("%s",nomeout);
in=fopen(nomein,"r");
out=fopen(nomeout,"wb");
scanf("%s",htag);

  while(!feof(in)){
    if((c=fgetc(in))=='#'){
      while(c=fgetc(in)=' '){
        s[i]=fgetc(in);
        i++
      }
       if(strcmp(s,htag)==0)
       conta++;
    }
  }
  if(fwrite(conta,sizeof(int),1,out)<0){
    printf("errore \n");
  }
  fclose(in);
  fclose(out);
  return 0;
}
