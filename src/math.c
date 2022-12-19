#include "math.h"
#include <stdio.h>


double pi_approx(unsigned int n) {
    // Gauss-Legendre
    double a = 1;
    double a_n = 1;
    double b = 2; b = 1/sqroot(&b, 10);
    double t = 0.25;
    double p = 1;

    for (unsigned int i=0; i<n; i++) {
        a_n = 0.5*(a+b);
        b = a*b; b = sqroot(&b, 10);
        t = t - p*(a-a_n)*(a-a_n);
        p = 2*p;
        a = a_n;
    }
    return (a+b)*(a+b)/(4*t);
}

unsigned long fac_alt(unsigned long n) {
    if (n == 1)
        return 1;
    return n * fac(n-1);
}

unsigned long fac(unsigned long n) {
    unsigned long int y = 1;
    for (unsigned int i=1; i<=n; i++)
        y *= i;
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

    for (unsigned int i=0; i<n; i++)
        y = y - (y*y - *x) / (2*y);
    return y;
}

double power(double x, unsigned int n)
{
    if (n == 0) 
        return 1;

    double t = power(x, n/2);

    if (n % 2)
        return x*t*t;
    else
        return t*t;
}

double sine(double x, unsigned int n)
{
    double pi2 = 2*PI;
    double y = 0;

    while (x > pi2)
        x -= pi2;
    for (unsigned int i=1; i<n; i+=2)
        y += power(-1.0, i/2) / fac(i) * power(x, i);
    return y;
}

double cosine(double x, unsigned int n)
{
    double pi2 = 2*PI;
    double y = 1;

    while (x > pi2)
        x -= pi2;
    for (unsigned int i=2; i<n; i+=2)
        y += power(-1.0, i/2) / fac(i) * power(x, i);
    return y;
}