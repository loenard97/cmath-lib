#ifndef COMPLEX_H
#define COMPLEX_H

typedef struct complex Complex;
typedef struct polar Polar;

Polar to_polar(Complex c);

double len(Complex c1);
Complex add(Complex c1, Complex c2);
Complex sub(Complex c1, Complex c2);
Complex mul(Complex c1, Complex c2);
Complex div(Complex c1, Complex c2);

#endif
