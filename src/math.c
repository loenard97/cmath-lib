#include "math.h"


unsigned long fac_alt(unsigned long n) {
    if (n == 1)
        return 1;
    return n * fac(n-1);
}

unsigned long fac(unsigned long n) {
    unsigned long int y = 1;

    for (int i=1; i<=n; i++)
    {
        y *= i;
    }
    return y;
}

unsigned long fib(unsigned long n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fib(n-1) + fib(n-2);
}

double sqroot(double* x, unsigned int n) {
    // Newton Method
    // f(x) = y^2 - x
    // f'(x) = 2*y
    double y = 1.0;

    for (int i=0; i<n; i++)
        y = y - (y*y - *x) / (2*y);
    return y;
}

double power(double* x, unsigned int n)
{
    if (n == 0) 
        return 1;

    double t = power(x, n/2);

    if (n % 2)
        return *x*t*t;
    else
        return t*t;
}