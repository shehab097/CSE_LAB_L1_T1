//prime number

#include <stdio.h>

int main() {
    for (int i = 50;i <= 90;i++) {

        if (i == 1 || i == 0) continue;

        int isPrime = 1; // prime

        for (int j = 2;j <= i / 2;j++) {
            if (i % j == 0) {
                isPrime = 0; //not a prime
            }
        }

        if (isPrime == 1) {
            printf("%d ", i);
        }
        // error
    }
    return 0;
}