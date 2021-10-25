#include <stdio.h>

unsigned long long int factorial(unsigned int n);

int main(void) {
    unsigned int n;
    unsigned long long int fact;
    int counter = 0;
    scanf("%u", &n);
    fact = factorial(n);

    while((fact / 10) > 0) {
        if (fact % 10 == 0) {
            counter++;
            fact /= 10;
        }
        else if ((fact / 10) != 0) {
            break;
        }
    }
    printf("%d\n", counter);

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