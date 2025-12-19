#include <stdio.h>
#include "basic.h"

int main() {
    printf("sum(3, 4) = %d\n", sum(3, 4));
    printf("sub(10, 5) = %d\n", sub(10, 5));
    printf("mul(6, 7) = %d\n", mul(6, 7));

    printf("divide(10, 2) = %d\n", divide(10, 2));
    printf("divide(10, 0) = %d (safe)\n", divide(10, 0));

    printf("mod(10, 3) = %d\n", mod(10, 3));

    printf("fac(5) = %d\n", fac(5));
    printf("fac(0) = %d\n", fac(0));

    printf("quo(5) = %f\n", quo(5));

    printf("ipow(2, 5) = %d\n", ipow(2, 5));
    printf("ipow(3, 0) = %d\n", ipow(3, 0));

    printf("root(16, 2) = %f\n", root(16, 2));
    printf("root(27, 3) = %f\n", root(27, 3));

    return 0;
}
