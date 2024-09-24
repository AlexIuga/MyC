//struct programmatore

typedef struct{
  char nome[50];
  char cognome[50];
  int eta;
  int ore[10];
  float codice[10];

}programmatore;

//array selezione che contiene i dati dei programmatori che hanno meno di 30 anni
//e hanno la media di codice scritto + alta rispetto a tutti

int main(){
  programmatore database[100]; //dati di 100 programmatori

  float media, codice[100];
  //media di codice
  for(int i=0;i<100;i++){
    for(int j=0;j<10;j++){
      codice[i]+=database[i].codice[j];
    }
    somma+=(codice[i]/10);
  }
  media=somma/100;

  if()

  return 0;
}
