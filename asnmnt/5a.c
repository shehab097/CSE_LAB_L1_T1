#include<stdio.h>
int main() {
    int a;
    printf("Enter number :: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("%d is even.\n", a);
    }
    else {
        printf("%d is odd\n", a);
    }
    return 0;
}

/*

5.Write  a program to check  odd  or even number
(a)  using modulus  operator

*/