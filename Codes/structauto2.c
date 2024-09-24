//struct autovettura

#include<stdio.h>
#include<stdlib.h>
#define MAX 50

typedef enum {DIESEL,BENZINA}motore;
typedef enum {4,6,8}cilindri;

struct veicolo{
  char nome[20];
  char marca[15];
  motore tipomotore;
  cilindri ncilindri;
  accessorio accessori[MAX];
};

typedef struct veicolo autovettura;
