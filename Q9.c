#include <stdio.h>

int power(int n);

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d\n", power(n));

    return 0;
}

int power(int n) {
    int times = 1, result = n;
    
    while (result <= 100000) {
        result *= n;
        times++;
    }
    
    return times;
}