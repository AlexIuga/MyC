#include<stdio.h>

int main()
{
int n;
printf("inserire un numero \n");
scanf("%d",&n);

if(n%2==0){
n=n+2;
}

else if(n%2==1){
n=n+1;
}

printf("il numero pari seguente è %d \n",n);

return 0;
}
