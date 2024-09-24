#include<stdio.h>

//Dichiarare in C il tipo autovettura. Ogni veicolo deve avere un nome, formato da non piu di 20 caratteri, una
//marca, non piu di 15 caratteri, un tipo di motore (benzina o diesel), un numero di cilindri (4,6, oppure 8)
//e un insieme di accessori. Supponendo l’esistenza di un tipo accessorio, ogni vettura non puo averne piu di 50
typedef struct{

}accessorio;

typedef enum{benzina,disel}motore;
typedef enum{quattro,sei,sedici}numero;

typedef struct{
  char nome[20];
  char marca[15];
  motore tipoMotore;
  numero numero_cilindri;
  accessorio accessori[50];

}autovettura;
