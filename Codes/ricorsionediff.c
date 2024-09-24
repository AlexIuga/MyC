//Dato un array d di interi di dimensione n (d e n sono i due soli parametri
//della funzione), calcolare il minimo valore tra la differenza di ogni elemento
//con il precedente (escluso il primo).

int minimadiff(int d[], int n){
  int temp;
  if(n==0 || n==1)
  return;
  if(n==2)
  return d[1]-d[0];

  //ordino
  for(int i=0;i<n;i++){
    if(d[i]>d[i+1]){
      temp=d[i];
      d[i]=d[i+1];
      d[i+1]=temp;
    }
  }
    return minimadiff(d,n-1);
  }
}
/////oppure
int min(int a, int b){
  if(a>b)
  return a;
  else
  return b;
}

int minimadiff(int d[],int n){
  if(n==0 || n==1)
  return;
  if(n==2)
  return d[1]-d[0];
  else{
    return min(d[1]-d[0],minimadiff(d+1,n-1));
  }
}
