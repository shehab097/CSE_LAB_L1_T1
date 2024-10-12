#include<stdio.h>
int main() {
    //using modulus operator
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
