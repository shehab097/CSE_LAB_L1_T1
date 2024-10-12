#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    int isPrime = 1;
    //prime

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            isPrime = 0;                    // 0 = not prime
        }
    }
                            
    if (isPrime == 1) {
        printf("%d is prime number\n", n);
    }

    if (isPrime == 0) {
        printf("%d is not prime number\n", n);
    }

    return 0;
}