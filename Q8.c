#include <stdio.h>
#include <math.h>

int recursive(int n);

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d\n", recursive(n));

    return 0;    
}

int recursive(int n) {
    if (n == 1) {
        return 2;
    }
    else if (n != 1) {
        return recursive(n - 1) + recursive(n / 2);
    }
}
