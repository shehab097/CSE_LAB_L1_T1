#include<stdio.h>
int main() {
    // (b) using bitwise operator 
    int n;
    printf("Enter a number:: ");
    scanf("%d", &n);

    if ((n ^ 1) == n - 1) {
        printf("%d is odd number.\n",n);
    }
    if ((n ^ 1) == n + 1) {
        printf("%d is even number.\n",n);
    }
    return 0;
}

/*
note:

if we XOR 1 with odd number -> it decrease by 1: 11^1 = 10

if we XOR 1 with even number -> it increase by 1: 100^1 = 101
*/