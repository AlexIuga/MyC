//Dichiarare in C le seguenti strutture dati: (a) il tipo colore del semaforo,
//che pu`o assumere i soli valori VERDE, ROSSO e ARANCIO, (b) il tipo contatto,
//che comprende un nome, un numero di telefono e un indirizzo di posta elettronica
//(si definiscano ulteriori tipi se necessario) e (c) il tipo orario di lavoro
//settimanale, chedefinisce l’ora di inizio e fine per ogni giorno della settimana,
//considerando l’uso del valore 1 come orad’inizio e fine per un giorno in cui non
//si lavora (si definiscano ulteriori tipi se necessario).
#include<stdio.h>
#define MAX 40
#define MAX 12
//a
typedef enum{VERDE,ROSSO,ARANCIONE} semaforo;   ///IMPORTANTE ENUM!!

//b
typedef struct {
  char nome[DIM];
  int  numero[10];
  char email[MAX];
}contatto;

//c
typedef enum{lun,mar,mer,gio,ven,sab,dom} giorno;
typedef struct{
  giorno x;
  float orain;
  float oraout;
}orarioSettimanale;
