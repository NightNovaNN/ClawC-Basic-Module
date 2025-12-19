#include <stdio.h>
#include <math.h>
#include "basic.h"

int sum(int x, int y) {
    return x + y;
}

int sub(int x, int y) {
    return x - y;
}

int mul(int x, int y) {
    return x * y;
}

int divide(int x, int y) {
    if (y == 0) {
        return 0; // avoid crash
    }
    return x / y;
}

int mod(int x, int y) {
    if (y == 0) {
        return 0;
    }
    return x % y;
}

int fac(int x) {
    if (x < 0) return 0; // undefined
    int res = 1;
    for (int i = 1; i <= x; i++) {
        res *= i;
    }
    return res;
}

double quo(int n) {
    if (n <= 1) return 1.0;

    double res = n;
    for (int i = n - 1; i >= 1; i--) {
        res /= i;
    }
    return res;
}

int ipow(int x, int y) {
    if (y < 0) return 0; // no negative powers for int
    int res = 1;
    for (int i = 0; i < y; i++) {
        res *= x;
    }
    return res;
}

double root(double x, double n) {
    if (n == 0) return 0; // undefined
    return pow(x, 1.0 / n);
}
