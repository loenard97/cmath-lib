#include "complex.h"
#include "math.c"
#include <math.h>


// Structs
typedef struct complex {
    double real;
    double imag;
} Complex;

typedef struct polar {
    double r;
    double theta;
} Polar;


// Conversions between Structs
Polar to_polar(Complex c) {
    Polar result;
    result.r = sqrt(c.real * c.real + c.imag * c.imag);
    result.theta = atan2(c.imag, c.real);
    return result;
}


// Operations
double len(Complex c1) {
    return sqrt(c1.real * c1.real + c1.imag * c1.imag);
}

Complex add(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

Complex sub(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

Complex mul(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real * c2.real - c1.imag * c2.imag;
    result.imag = c1.real * c2.imag + c1.imag * c2.real;
    return result;
}

Complex div(Complex c1, Complex c2) {
    Complex result;
    double denominator = c2.real * c2.real + c2.imag * c2.imag;
    result.real = (c1.real * c2.real + c1.imag * c2.imag) / denominator;
    result.imag = (c1.imag * c2.real - c1.real * c2.imag) / denominator;
    return result;
}
