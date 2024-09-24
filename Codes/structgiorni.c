#include<stdio.h>

int main()
{
int differenza;

struct{
  int giorno;
  int mese;
  int anno;
}data1,data2;

//inserimento prima data
printf("inserire giorno: \n");
scanf("%d",&data1.giorno);
printf("inserire mese in numero: \n");
scanf("%d",&data1.mese);
printf("inserire anno: \n");
scanf("%d",&data1.anno);


//inserimento seconda data
printf("inserire giorno: \n");
scanf("%d",&data2.giorno);
printf("inserire mese in numero: \n");
scanf("%d",&data2.mese);
printf("inserire anno: \n");
scanf("%d",&data2.anno);

  if(data1.anno>data2.anno){
     differenza=data1-data2;
   }
   if(data1.anno<data2.anno){
      differenza=data2-data1;
    }

  else if(data1.anno==data2.anno){
    if(data1.mese>data2.mese)
      differenza=data1-data2;
    if(data1.mese<data2.mese)
      differenza=data2-data1;
    if(data1.mese==data2.mese){
       if(data1.giorno>data2.giorno)
         differenza=data1.giorno-data2.giorno;
       if(data1.giorno<data2.giorno)
         differenza=data2.giorno-data1.giorno;
       if(data1.giorno==data2.giorno)
         differenza=0;
      }

   }

printf("i due giorni sono distanti %d",differenza);

return 0;
}
