#include<stdio.h>
int main() {
    int a, b, c;
    printf("Enter 3 int:: ");
    scanf("%d %d %d", &a, &b, &c);

    printf("Forward:: %d %d %d\n", a, b, c);
    printf("Backward:: %d %d %d\n", c, b, a);

    return 0;
}

/*

2.Write a C program toprompt the user to input 3
integer values and print these values in forward
and reversed order.

*/