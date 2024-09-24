//struct data
#include<stdio.h>

typedef struct data{
  int giorno;
  int mese;
  int anno;
}data;

int differenzaingiorni(data a, data b){
  //differenza di anni
  int annidiff,mesidiff;
  if(a.anno>b.anno)
    annidiff=a.anno-b.anno;
  if(a.anno<b.anno)
    annidiff=b.anno-a.anno;

  if(a.anno==b.anno){
    annidiff=0;
    //se è lo stesso mese
    if(a.mese==b.mese){
      if(a.giorno>b.giorno)
        return a.giorno-b.giorno;
      else
        return b.giorno-a.giorno;
      }
     if(a.mese>b.mese)
       mesidiff=a.mese-b.mese;
     else
       mesidiff=b.mese-a.mese;
   }
   if(a.giorno>b.giorno)
   return (annidiff*365)+(mesidiff*30)+(a.giorno-b.giorno);
   else
   return (annidiff*365)+(mesidiff*30)+(a.giorno-b.giorno);
}

int main(){
  data a,b;
  int differenza;
  //prima data
  printf("inserire giorno, mese, anno della prima data \n");
  do{
  scanf("%d",&a.giorno);
  }while(a.giorno>31 && a.giorno<1);
  do{
  scanf("%d",&a.mese);
}while(a.mese>12 && a.mese<1);
  scanf("%d",&a.anno);
  //seconda data
  printf("inserire giorno, mese, anno della seconda data \n\n");
  do{
  scanf("%d", &b.giorno);
}while(b.giorno>31 && b.giorno<1);
  do{
  scanf("%d", &b.mese);
}while(b.mese>12 && b.mese<1);
  scanf("%d", &b.anno);

  differenza=differenzaingiorni(a,b);
  printf("la differenza tra le due date è %d \n\n",differenza);
}
