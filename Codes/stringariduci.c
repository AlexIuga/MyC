#include<stdio.h>
#include<string,h>
#define DIM 100

void riduci_iter(char s[]);

int main()
{



return 0;
}

void riduci_iter(char s[])
{
  int i,dim;

  dim=strlen(s);
  char prov[dim];
  for(int j=0;j<dim;j++)
     prov[j]=s[j];

  for(i=0:i<dim;i++)
  {
    if(prov[i]!='a' || prov[i]!='e' || prov[i]!='i' || prov[i]!='o' || prov[i]!='u')
    {
    s[i]=prov[i]
    }
  }
}
