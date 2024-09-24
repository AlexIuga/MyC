//ricorsioni + array
// x*y=10^n * xs *ys + 10^(n/2)(xd*ys + xs*yd) + xd*yd    //xd*yd è la parte ricorsiva

#include <stdio.h>
#include <math.h>

int prod(int x[], int y[], int n)
{
  if(n==1)
    return x[0]*y[0];
  else
    return pow(10,n)*prod(x,y,n/2) + pow(10,n/2)*(prod(x+n/2,y,n/2)+prod(x,y+n/2,n/2))+prod(x+n/2,y+n/2,n/2);
}
