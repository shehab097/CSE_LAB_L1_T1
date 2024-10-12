#include<stdio.h>
int main() {
    //using bitwise operator 
    int n = 70;
    n & 1 && printf("Odd") || printf("Even");
    return 0;
}