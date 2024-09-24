#include <stdio.h>

 int multipli(int num, int v[], int p[], int l){
   int j=0;
   for(int i=0;i<l;i++){
     if(v[i]%num==0){
       p[j]=v[i];
       j++;
    }
   }
   return j;
 }


 int main(){
  int num, mult[100], v[100], nm, nv;
   /* Inserire qui il codice richiesto dalla DOMANDA A */
   printf("inserire una sequenza di massimo 100 numeri terminata da 0 \n");

   for(int i=0;i<100 ;i++){
     scanf("%d", &v[i]);
     nv=i;
     if(v[i]<1)
      break;
   }

   printf("inserire il multiplo \n");
    scanf("%d",&num);
   nm = multipli(num,v,mult,nv);
   int i=0;

   for (i=0; i<nm; i++)
   printf("%d ",mult[i]);
   printf("\n");

   return 0;
  }
