#include "vec3D.h"
#include "math.c"
#include <stdio.h>


typedef struct vec3D {
    double a;
    double b;
    double c;
} Vec3D;


void printVec3D(Vec3D* vec1) {
    printf("<Vec3D object '%f, %f, %f' at %p>\n", vec1->a, vec1->b, vec1->c, vec1);
}

double len(Vec3D* vec1) {
    double sum = vec1->a * vec1->a + vec1->b * vec1->b + vec1->c * vec1->c;
    return sqroot(&sum, 10);
}

void mul(Vec3D* vec1, double factor) {
    vec1->a *= factor;
    vec1->b *= factor;
    vec1->c *= factor;
}

void norm(Vec3D* vec1) {
    mul(vec1, 1/len(vec1));
}


void add(Vec3D* vec1, Vec3D* vec2) {
    vec1->a = vec1->a + vec2->a;
    vec1->b = vec1->b + vec2->b;
    vec1->c = vec1->c + vec2->c;
}

void sub(Vec3D* vec1, Vec3D* vec2) {
    vec1->a = vec1->a - vec2->a;
    vec1->b = vec1->b - vec2->b;
    vec1->c = vec1->c - vec2->c;
}

void sprod(Vec3D* vec1, Vec3D* vec2) {
    vec1->a = vec1->a * vec2->a;
    vec1->b = vec1->b * vec2->b;
    vec1->c = vec1->c * vec2->c;
}

void cprod(Vec3D* vec1, Vec3D* vec2) {
    double a = vec1->b * vec2->c + vec1->c * vec2->b;
    double b = vec1->c * vec2->a + vec1->a * vec2->c;
    double c = vec1->a * vec2->b + vec1->b * vec2->a;

    vec1->a = a;
    vec1->b = b;
    vec1->c = c;
}