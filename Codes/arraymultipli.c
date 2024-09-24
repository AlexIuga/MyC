//array

#include<stdio.h>

 int multipli(int num, int v[], int p[], int l)
 {
  int conta=0,j=0;
   for(int i=0;i<l;i++){
     if(v[i]%num==0){
       conta ++;
       p[j]=v[i];
       j++;
       }
    }
  return conta;
 }

 int main() {
   int num, mult[100], v[100], nm, nv=0;
   int x;
   printf("inserisci il numero multiplo  ");
   scanf("%d",&num);
   /* Inserire qui il codice richiesto dalla DOMANDA A */
   printf("inserisci la sequenza di numeri \n");
   for(int j=0;j<100;j++){
     scanf("%d",&x);
     if(x<=0)
       break;
     v[j]=x;
     nv ++;
   }
   nm = multipli(num,v,mult,nv);

   int i=0;
  printf("i multipli sono: \n");
   for (i=0; i<nm; i++)
   printf("%d ",mult[i]);
   printf("\n");

   return 0;
 }
