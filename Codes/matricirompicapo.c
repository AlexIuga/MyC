//puzzle 
int addp(int G[5][5], int p, int i, int j);
int removep(int G[5,5], int p, int i, int j);

int fit(int G[5][5], int p, int i, int j){
  if(p==1){
    if(i<0 || j<0 || i=4 || j=4)
     return 0;
    if(G[i][j]==0 && G[i][j+1]==0 && G[i+1][j] && G[i+1][j+1])
    return 1;
  }
  else if(p==2){
    if(j>2)
     return 0;
    if(G[i][j]==0 && G[i][j+1]==0 && G[i][j+2]==0)
    return 1;
  }
  else if(p==3){
    if(i>2)
     return 0;
    if(G[i][j]==0 && G[i+1][j]==0 && G[i+2][j]==0)
    return 1;
  }
  else
   printf("pezzo inserito non valido \n");
}

int solve(int G[5][5], int p[], int npezzi){
  if(npezzi=0)
   return 1;
  else{
      for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
          if(addp(G,p[0],i,j)==1){
            if(solve(G,p+1,npezzi-1)){
              removep(G,p[0],i,j);
              return 1;
            }
            else{
              removep(G,p[0],i,j);
            }
          }
          return 0;
        }
      }
  }
}
