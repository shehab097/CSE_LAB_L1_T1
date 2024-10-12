//fibonacci series

#include <stdio.h>

int main() {
    long long int fib[50];
    fib[0] = 0;
    fib[1] = 1;

    for (int i = 2;i < 50;i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0;i < 50;i++) {
        printf("%lld\n", fib[i]);
    }

    return 0;
}


// 0 1 1 2 3 5 8 13...