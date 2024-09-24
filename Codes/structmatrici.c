//struct di matrici

#define DIMMAX 12     //se non c'è un indicazione massima probabilmente non serve un array/matrice

typedef struct {
  char colore;
  int albero;
}cella;


//dichiarazione

cella matrice[MAXDIM][MAXDIM];



//nelle funzioni specificare la lunghezza di colonna delle matrici
//altrimenti il calcolatore non sa come saltare da una riga all'altra.
//posso unsare MAX_DIM anche dopo aver saputo la dimensione del file.
