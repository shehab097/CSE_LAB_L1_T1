#include <stdio.h>

void divisor(int n) {
    for (int i = 1;i <= n;i++) {
        if (n % i == 0) {
            printf("%d ", i);
        }
    } 
}

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    if (n < 0) return -1;

    int fact = 1;
    for (int i = 1;i <= n;i++) {
        fact *= i;
    }
    return fact;
}

int main() {
    int n;
    scanf("%d", &n);
    divisor(n);
    printf("\n");

    printf("%d", fact(n));
    return 0;
}