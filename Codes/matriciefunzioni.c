
//devo dire le colonne
void f(int m[][NCOL])
{
 //...
 m[i][j]=0;
}



//nel main

int m[NRIGHE][NCOL];
//...
f(m);   //chiamare


//posso rinunciare alla forma matrice per averla di qualsiasi dimensione
//posso usarla come array

void f2(int m[], int righe, int colonne)
{
//...
 m[i*colonne + j]=0;    //elemento ij
}
//nel main

f2(&m[]);
