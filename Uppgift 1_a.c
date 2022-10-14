/********************************************************************************
* uppgift 1_a.c: Subtraherar två värden och returnerar differensen via
*                funktioen subract. Sendan skrivs ekvationen ut i terminalen.
********************************************************************************/

#include <stdio.h>

double subtract(double x,
                double y)
{
    return x - y;
}

int main(void)
{
   double a = 3.4;
   double b = 6.8;
   double c = subtract(a, b);


   printf("%lg - %lg = %lg\n", a, b, c);

   return 0;
}