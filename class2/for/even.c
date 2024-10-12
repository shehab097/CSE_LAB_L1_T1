#include<stdio.h>
int main() {
    //Write a c program that print 1 to 100 int number
    for (int i = 1; i <= 100;i++) {
        if (i % 2 == 0) {
            printf("%d\t", i);
        }
    }
    printf("\n");
    return 0;
}