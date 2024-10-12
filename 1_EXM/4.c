//factorial

#include<stdio.h>

int main() {
    long long int fact = 1, n;
    scanf("%d", &n);

    for (int i = 1;i <= n;i++) {
        fact *= i;
    }

    printf("Factorial :: %d\n", fact);
    return 0;
}