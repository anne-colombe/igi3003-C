#include <stdio.h>
/*
int max3(int a, int b, int c)
{
    if (a >= b && a >= c)
        return a;
    else if (b >= c)
        return b;
    else
        return c;
} */

// on souhaite réecrire la fonction en réduisant le corps

int max_3(int a, int b, int c)
{if (a>=b && a>=c) return a; else if (b>=c) return b; else return c;}

int main(){
    printf("%d\n", max_3(3,4,5.0));
}

