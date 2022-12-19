#include "fraction.h"


typedef struct fraction {
    int a;
    int b;
} Fraction;


void add(Fraction* a, Fraction* b) {
    a->a = a->a * b->a;
    a->b = a->b * b->b;
}

void sub(Fraction* a, Fraction* b) {
    a->a = a->a * b->a;
    a->b = a->b * b->b;
}

void mul(Fraction* a, Fraction* b) {
    a->a = a->a * b->a;
    a->b = a->b * b->b;
}

void div(Fraction* a, Fraction* b) {
    a->a = a->a * b->a;
    a->b = a->b * b->b;
}