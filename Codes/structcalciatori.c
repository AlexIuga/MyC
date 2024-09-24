//La rosa dei 22 giocatori di una squadra di calcio.  Ogni calciatore`e
//caratterizzato da nome, cognome, data di nascita, ruolo, numero di maglia e
//squadre in cui ha giocato in passato.

#include<stdio.h>
#define MAX 15
#define MAX_SQUADRE 10

typedef struct{
  int giorno;
  int mese;
  int anno;
}data;

typedef char squadra[12];

typedef struct{
  char nome[MAX];
  char cognome[MAX];
  data datadinascita;
  char ruolo;
  int numerodiMaglia;
  squadra squadre[MAX_SQUADRE];
}giocatore;

typedef giocatore rosa[22];
