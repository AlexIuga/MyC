#include<stdio.h>
#include<string.h>
#include<stdlib.h>

#define MAX_DIM 200

void riduci_iter(char* s);
int vocale(char c);

int main()
{
char stringa[MAX_DIM];
printf("inserire il testo\n");
scanf("%[^\n]",stringa);

stringa=riduci_iter(stringa);

printf("il testo seza vocali è %s",stringa);

return 0;
}

int vocale(char c){
  return (c=='a' || c=='e' || c='i' || c='o' || c=='u');
}

void riduci_iter(char* s)       //
{
int i,j=0;
  for(i=0;s[i]!='\0';i++){
    if((vocale(s[i]))==0){
      s[j]=s[i];
      j++;
    }
  }
  s[j]='\0';
}

void riduci_ricorsiva(char* s){
  //caso base stringa vuota
  if(srlen(s)=0)
  return;
  //esiste almeno un carattere
  riduci_ricorsiva(s+1);

  if(vocale(s[0])==1)
    for(int i=1; i<strlen(s)+1:i++){
      s[i+1]=s[i];
    }
}

char* riduci_ricorsiva2(char* s)          //con malloc
{
  //caso base
  if(strlen(s)==0)
      return "";                     // ""= stringa costante.(mai cancellata, non serve malloc)
  //secondo caso base=1 carattere
  if(vocale(s[0])==1
    return riduci_ricorsiva2(s+1);
  else{
    char *new_s =malloc(sizeof(char)*(strlen(s)+1));
    char *suffix=riduci_ricorsiva2(s+1);
    new_s[0]=s[0];
    new_s[1]='\0';
    strcat(new_s,suffix);
      if(strlen(suffix)>0)      //libero la seconda stringa
        free(suffix);
     return new_s;
   }
}
