//matrici e funzioni ricorsive

#include<stdio.h>

int fit(int G[5][5], int p, int i, int j)    //restituisce 1 se il pezzo è incastrato
{
  //zeri dove è vuota, 1 dove è piena.
  if(i<0 || j<0 || i>4 || j>4)    //se i e j non sono nella matrice
    return 0;
  //verifico che la casella sia vuota
  if(G[i][j]!=0)
    return 0;
  //tre casi, ognuno per ogni pezzo
  //1.quadrato
  if(p==1)
   {
     if(i+1<5 && j+1<4)                       //controllo sul bordo
     return (G[i][j+1] && G[i+1][j] && G[i+1][j+1]) ;
     else
     return 0;
   }
  //2.barra verticale
  if else(p==2)
  {
    if(i+1<5 && i+2<5)
    return (G[i+1][j] && G[i+2][j]);

    else
    return 0;
  }
  //3.barra orizzontale
   if else(p==3)
   {
     if(j+1<5 && j+2<5)
     return (G[i][j+1] && G[i][j+2]);

     else
     return 0;
   }
}

int solve(int G[5][5], int p, int npezzi)    //restituisce 1 se riesco a incastrare i pezzi, 0 altrimenti
{
  //caso base (so risolvere immediatamente, e sono sicuramente in grado di arrivare)
  //in questo caso quando finisco i pezzi
  int trovata=0,i,j;

  if(npezzi==1){
    for(i=0;i<4;i++){
      for(j=0;j<4;j++){
        if (fit(G,p[0],i,j)==1)
          trovata=1;
      }
    }
    return trovata;
  }
  //passo ricorsivo
  for(i=0;i<4;i++)
    for(j=0;j<4;j++)
      if(fit(G,p[0],i,j)==1)
      {
        sddp(G,p[0],i,j);
        trovatasolve(G,p+1,npezzi-1)
      if(trovata==1)
        return 1;
    //backtracking
      else
      removep(G,p[0],i,j);
      }
   return 0;
}
