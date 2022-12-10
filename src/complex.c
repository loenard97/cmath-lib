#include "math.c"


typedef struct complex
{
    double real;
    double imag;
} Complex;


double len(Complex* a)
{
    double sum = a->real * a->real + a->imag + a->imag;
    return sqroot(&sum, 10);
}

void add(Complex* a, Complex* b)
{
    a->real = a->real + b->real;
    a->imag = a->imag + b->imag;
}

void sub(Complex* a, Complex* b)
{
    a->real = a->real - b->real;
    a->imag = a->imag - b->imag;
}