#include <stdio.h>

int f(int n, int r);

int main (){
    printf("%d\n",f(7891,0));
    return 0;
}

int f(int n, int r) {
    if(n == 0)
        return r;
    else
        return f(n / 10, r * 10 + n % 10);
}
