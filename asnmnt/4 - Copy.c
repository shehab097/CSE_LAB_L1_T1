#include<stdio.h>
int main() {
    //
    int a;
    int b;

    printf("Enter a and b :: ");
    scanf("%d %d", &a, &b);

    b = a - b;
    a = a - b;
    b = a + b;

    printf("swap numbers\n................\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    return 0;
}

/*
4.Write a program to swap two variables’ values with and
without using third variables
*/