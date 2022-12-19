#include "constant.h"
#include "math.c"


double pi_alt(unsigned int n) {
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

double e_alt(unsigned int n)
{
    double t = 1 + 1/n;
    return power(t, n);
}

double e(unsigned int n)
{
    double y = 1;
    for (unsigned int i=1; i<n; i++)
    {
        y += 1.0 / fac(i);
    }
    return y;
}