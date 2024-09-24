// scrivere una funzione che consenta la somma tra matrici (della stessa dim)

#include<stdio.h>
#include<stdlib.h>
#define N 100

//funzioni
//1
void somma1(int a[][N],int b[][N],int sum[][N],int r,int c);          //sono obbligata a mettere N (misura della matrice)
//2
void somma2(int a[],int b[], int sum[],int r, int c);               //tratto le matrici come array
//3
tipedef int(*matrix_pointer)[N];
matrix_pointer somma3(int a[][N],int b[][N],int sum[][N],int r,int c);
//4
int **somma4(int a[],int b[], int sum[],int r, int c);

//nel main...
int main(){
  int a[M][N],b[M][N],sum[M][N];
  int r,c;
  matrix_pointer summ;
  int a[2][3],b[2][3], **somma;

  // leggo le matrici e r e c


  //richiamare somma 1
   somma1(a,b,sum,r,c);                            // &a[0][0] è il primo elemento dell'array
   //richiamare somma 4
   somma2(&a[0][0],&b[0][0],&sum[0][0],2,3);       //se no pensa che a,b,sum siano puntatori
   //richiamare somma 3
   summ = somma3(a,b,2,3);
   //richiamare somma4
   somma=somma4(&a[0][0],&b[0][0],2,3);

  return 0;
}

//funzioni

void somma1(int a[][N],int b[][N],int sum[][N],int r,int c){           //sono obbligata a mettere N (misura della matrice)
  int i,j;

  for(i=0;i<r;i++)
     for(j=0;j<c;j++)
        sum[i][j]=a[i][j]+b[i][j];

//uso le matrici come array
void somma2(int a[],inr b[],int sum[],int r,int c){      //non devo specificare il numero di colonne
  int i,j;
  for(i=0;i<r;i++)
     for(j=0;j<c;j++)
        sum[i*c+j]=a[i*c+j]+b[i*c+j];

}
//versione un po' inutile
tipedef int(*matrix_pointer)[N];
matrix_pointer somma3(int a[][N],int b[][N],int sum[][N],int r,int c){
  int i,j;
  matrix_pointer sum = malloc(r*N*sizeof(int));
  for(i=0;i<r;i++)
     for(j=0;j<c;j++)
        sum[i][j]=a[i][j]+b[i][j];

}
//versione 3
int **somma4(int a[],int b[], int sum[],int r, int c){            //allocare un doppio puntatore
   sum=malloc(r*sizeof(int*));                   //
    for(i=0;i<r;i++)                             //struttora dati del doppio puntatore
    sum[i]=malloc(c*sizeof(int));                //

    for(i=0;i<r;i++)
       for(j=0;j<c;j++)
          sum[i*c+j]=a[i*c+j]+b[i*c+j];
}
