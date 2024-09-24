//Data una stringa s (parametro), decidere se questa`e palindrome, ovvero se si
//pu`o leggere indifferentemente nei due sensi.
#include<stdio.h>
#include<string.h>


int palindrome(char s[]){
  int dim;
  char *t;
  dim=strlen(s);
  if(dim==1 || dim==0)
   return 1;

   t=malloc(dim-1);
   strcopy(t,s,(dim-1));
  else
    return (s[0]==s[dim-1]) && palindrome(t+1);
}
