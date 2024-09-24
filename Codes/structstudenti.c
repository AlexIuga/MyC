//Dichiarare in C una struttura dati per rappresentare la carriera universitaria
//di uno studente. Ovvero, la struttura deve consentire la memorizzazione del nome
//e cognome dello studente, la sua matricola, i voti riportati nei 30 esami da
//sostenere per conseguire la laurea e la media pesata, aggiornata dopo l’aggiunta
//di ogni esame. La media `e pesata perch´e ogni esame pu`o valere 3, 5, 8, 10 o 12
//crediti e la media deve tenere conto del “peso” del singolo esame. Scrivere anche
//una funzione che prende come parametro la struttura dati relativa ad uno studente,
//consente l’inserimento dei dati relativi ad un esame, aggiorna la media e restituisce
//la struttura dati aggiornata.

#include<stdio.h>
#include<string.h>
#define NOME 20
#define COGNOME 20
#define ESAMI 31


typedef struct{
  int voto[31];
  int  crediti;
} esame;

typedef struct {
  char nome[NOME];
  char cognome[COGNOME];
  int matricola[9];
  esame esami[ESAMI];
  float media;
}studente;

void aggiorna(strudete *s, esame e){
  if()
}
