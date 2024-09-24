//Scrivere in C una struttura dati completa per rappresentare un polinomio di grado n
//qualsiasi. Differenziarei casi, ed eventualmente definire strutture dati diverse,
//in cui il gradonmassimo`e noto, oppure no, e i casi in cui il polinomio`e sparso o denso.
#include<stdio.h>
#define GRADO 20

//grado noto

typedef struct{
  int coefficente;
  int grado;
}monomio;

typedef int polinomio[GRADO];

typedef struct monomio{
  int coefficiente;
  inr grado;
  struct monomio *prox;
}monomio2;
