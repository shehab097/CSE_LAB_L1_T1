#include <stdio.h>

int main() {
    // Your code goes here
    int a = 10;
    int b = 12;

    int temp = a;
    a = b;
    b = temp;

    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}