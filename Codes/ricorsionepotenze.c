#include<stdio.h>

int potenza(int a, int b);

int main()
{
  int a,b;
  scanf("%d",&a);
  scanf("%d",&b);
  if(potenza(a,b)==1)
    printf("%d è una potenza di %d\n",a,b);
  else
    printf("%d è non una potenza di %d\n",a,b);


return 0;
}

int potenza(int a, int b){

if(b!=0){
   //caso base
if(a==1 || a==b)
    return 1;
if(a==0)
    return 0;
    //caso generale
  else if(a%b==0)
    return potenza(a/b,b);
  else
    return 0;
  }
  
if (b==1)
  return 0;

}
