//STRUCT
//Il campionato di calcio di seria A: 38 giornate (19 per il girone d’andata e 19 per
//il ritorno), con 10 partite per giornata.  Ogni partita deve raggruppare le due
//squadre interessate (la prima`e quella che gioca in casa) e il risultato ottenuto.
#include<stdio.h>

typedef char squadra[12];

typedef struct{
  squadra Casa;
  squadra Trasferta;
  int goalCasa;
  int goalTrasferta;
}partita;

typedef partita giornata[10];

typedef struct{
  giornata andata[19];
  giornata ritorno[19];
}campionato;
