//esercizio file

//STAMPA DISTINTI
//Implementare	una	funzione,	stampa_distinti,	che	riceve	come	parametri	in
//ingresso	una	stringa	nomefile,	contenente	il	nome	di	un	file	testuale,
//ed	un	numero	intero	n.	La	funzione	ha	il	compito	di	aprire	il	file
//specificato	attraverso	il	parametro	nomefile	e	stampare	a	video	i	primi	n
//caratteri	distinti	(cioè	diversi	fra	loro)	separati	da	uno	spazio.

void stampa_distinti(char nomefile[], int n)
{
  FILE *f;
  char caratteri[256]={0};
  int stampato=0;
  char c;

  f=fopen(nomefile,"r");

  if(fopen(nomefile,"r")!=NULL)
  {
    while((c=fgetc(f))!=EOF && stampati<n){
      if(caratteri[c]==0){
        printf("%c",c);
        stampati++;
        caratteri[c]=1;
      }
    }
  }
}
