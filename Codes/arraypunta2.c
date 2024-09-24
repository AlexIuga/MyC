//Scrivere in C una funzione che, usando opportunamente il passaggio dei parametri
//per copia e indirizzo, legge un array di interi di dimensione variabile e produce/scrive
//un ulteriore array, della stessa dimensione del precedente. Ogni cella del nuovo
//array deve contenere la somma degli elementi del primo array dalla posizione zero alla posizione corrente

int *array_somma(int a[], int n){
  int *v=malloc(sizeof(int)*n);
  int somma=0;

  for(int i=0;i<n;i++){
    somma=somma+a[i];
    *(v+i)=somma;              ///v[i]=somma;
  }
  return v;
}
