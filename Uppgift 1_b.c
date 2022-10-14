/********************************************************************************
* uppgift 1_b.c: Subtraherar två variabler och lagrar differansen på en tredje 
*                variabel via pekare. Sedan skrer en utskrift av ekvationen.
********************************************************************************/

#include <stdio.h>

void subtract(double x,
              double y,
              double* z)
{
    *z = x - y;
    return;
}

int main(void)
{
    double a = 3.4;
    double b = 6.8;
    double c;

    subtract(a, b, &c);
    printf("%lg - %lg = %lg\n", a, b, c);

    return 0;
}