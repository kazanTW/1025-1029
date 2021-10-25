#include <stdio.h>

unsigned int transfer(int n, int b);

int main(void) {
    int n, b;
    unsigned int result;
    scanf("%d %d", &n, &b);

    result = transfer(n, b);
    printf("%013u\n", result);

    return 0;
}

unsigned int transfer(int n, int b) {
    int reminder, i = 1; 
    unsigned int number = 0;
    
    while (n != 0) {
        reminder = n % b;
        n = n / b;
        number += reminder * i;
        i *= 10;
    }

    return number;
}