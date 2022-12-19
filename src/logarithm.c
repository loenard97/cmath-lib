#include "logarithm.h"
#include <math.h>


double ln(double x, int n) {
    double result = 0;
    for (int i = 1; i <= n; i++) {
        result += pow(-1, i + 1) * pow(x - 1, i) / i;
    }
    return result;
}
