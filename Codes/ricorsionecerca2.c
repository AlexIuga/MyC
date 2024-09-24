//Scrivere una funzione ricorsiva in C che,avendo in input un array di n interi
//positivi, dia in output 1 se 10 `e un elemento della lista, 0 altrimenti.

int cercadieci(int array[],int n){
  int i=0;

  if(n==0)
   return 0;
   if(n=1){
     if(a[0]==10)
      return 1;
    else
     return 0;
   }
  else{
    return cercadieci(a,n-1);
  }
}
