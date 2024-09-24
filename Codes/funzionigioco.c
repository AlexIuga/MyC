#include<stdio.h>

int leggiNumero(int a);
int resto(int b);

int main(){
int t,p,operazione,i;
int mosse=10;

  printf("turno del GIOCATORE 1\n\n");
  p=leggiNumero(p);
  t=leggiNumero(t);

  printf("turno del GIOCATORE 2\n\n");
  printf("decidere l'operazione per far coincidere p a t in 10 mosse\n\n");

  for(i=0;i<10;i++){
    if(p==t)
      break;
    printf("decidere l'operazione tra\n1-aggiungere 1 a p\n2-moltiplica p per 2\n3-aggiorna p con il resto della divisione di p per 31\n\n");
    scanf("%d",&operazione);

      if(operazione==1){
        p++;
      }
      else if(operazione==2){
        p=p*2;
      }
      else if(operazione==3){
        p=resto(p);
      }
    printf("il valore aggiornato di p è %d \n\n",p);
  }

    if(p==t)
      printf("il GIOCATORE 2 ha vinto\n\n");
    else
      printf("il GIOCATORE 1 ha vinto \n\n");

return 0;
}


int leggiNumero(int a){
   do{
     printf("inserisci un numero tra 0 e 1000 \n");
     scanf("%d",&a);
   }while(a<0 && a>1000);
 return a;
}

int resto(int b){
  b=b%31;
  return b;
}
