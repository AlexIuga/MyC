#include <stdio.h>
#define DIM 5

int main(){
int a[DIM],b[DIM];
int c[2*DIM];
int i,j;
float media1=0,media2=0;
int max=c[0], min=c[0];
int pos_max=0, pos_min=0;

  printf("inserire la prima sequenza \n");
  for(i=0;i<DIM;i++){
    printf("inserisci la posizione %d della prima sequenza\n",i);
    scanf("%d",&a[i]);
  }
  printf("inserire la seconda sequenza \n");
  for(j=0;j<DIM;j++){
    printf("inserisci la posizione %d della seconda sequenza\n",j);
    scanf("%d",&b[j]);
  }

//quale dei due array ha valore medio più basso

 //valor medio
 for(i=0;i<DIM;i++){
   media1+=a[i];
   media2+=b[i];
 }
 media1=media1/DIM;
 media2=media2/DIM;

 if(media1>media2)
   printf("la prima sequenza ha un valore medio maggiore\n");
 else
   printf("la seconda sequenza ha un valore medio maggiore\n");

//calcolare l'array concatenato

  for(i=0;i<2*DIM;i++){
    c[i]=a[i];
    c[DIM+i]=b[i];
  }
printf("le sequenze concatenate sono :\n");
    for(i=0;i<2*DIM;i++){
      printf("%d",c[i]);
      printf("\n");
    }

//trovare massimo e minimo

  for(i=0;i<DIM*2;i++){
    if(c[i]>max){
      max=c[i];
      pos_max=i;
    }
    if(c[i]<min){
      min=c[i];
      pos_min=i;
    }
   }

   if(pos_max<DIM)
     printf("il massimo è %d e si trova nella prima sequenza\n",max);
   else{
     printf("il massimo è %d e si trova nella seconda sequenza\n",max);
   }
   if(pos_min<DIM)
     printf("il minimo è %d e si trova nella prima sequenza\n",min);
   else{
     printf("il minimo è %d e si trova nella seconda sequenza\n",min);
   }

//prodotto scalare
int prodotto=0;
  for(i=0;i<DIM;i++){
    prodotto += a[i]*b[i];
  }
printf("il prodotto scalare è %d \n",prodotto);

return 0;
}
