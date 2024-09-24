//Scrivere una funzione ricorsiva che riceve in ingresso due interi positivi x
//ed y e restituisce x elevato alla y. Non utilizzare l’operatore pow(a,b), ma
//soltanto somme e moltiplicazioni.

int potenza(int x,int y){
  //casi base
  //y=0
  if(y==0)
   return 1;
  else if(y==1)
   return x;
   //caso generale
  else{
    return x*potenza(x,y-1);
  }
}
