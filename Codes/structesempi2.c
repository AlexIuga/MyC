//Dichiarare in C le seguenti strutture dati:  (a) il tipo seme delle carte, che
//pu`o assumere i soli valoriQUADRI,CUORI,PICCHEeFIORI, (b) il tipo contratto,
//che comprende il nome del venditore, il nome dell’acquirente el’ammontare in
//euro della vendita (si definiscano ulteriori tipi se necessario) e (c) il tipo
//produzione giorna-liera, che definisce la quantit`a di latte prodotta, in litri,
//ogni giorno da ognuna delle10mucche di una stalla(si definiscano ulteriori tipi se necessario).
#include<stdio.h>
#define MAX 30
//a
typedef enum{QUADRI,CUORI,PICCHE,FIORI} seme;
//b
typedef struct{
  char nomeVenditore[MAX];
  char nomeAquirente[MAX];
  float ammontareVendita;
}contratto;

//c
typedef struct{
  float litri
}produxione;
