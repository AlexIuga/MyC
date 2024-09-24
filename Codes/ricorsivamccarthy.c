//funzione ricorsiva McCarthy

int McCarthy(int n){
  //caso base
  if(n>100)
    return (n-10);
    //caso generale
  else
     temp=McCarthy(n+11);
    return McCarthy(temp);
}


int main()
{
  int a,b;
  
}
