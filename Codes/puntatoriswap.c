//funzione swap

#include <stdio.h>

void swap(float *px, float *py)
{
  float temp;
  temp= *px;
  *px=*py;
  *py=temp;
}

int main(){

float x,y;

printf("inserire due numeri \n");
scanf("%f""%f",&x,&y);


swap(&x,&y);

printf("i numeri invertiti sono %f e %f \n\n", x, y);

return 0;
}
