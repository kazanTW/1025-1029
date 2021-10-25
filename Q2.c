#include <stdio.h>

unsigned long long int factorial(unsigned int n);

int main(void) {
    unsigned int n;
    scanf("%u", &n);

    printf("%llu\n", factorial(n));

    return 0;
}

unsigned long long int factorial(unsigned int n) {
    unsigned long long int fact = 1;

    if (n == 0 || n == 1) {
            fact = 1;
    }
    else {
        for (int i = 1; i <= n; i++) {
            fact *= i;
        }
    }

    return fact;
}