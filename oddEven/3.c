#include<stdio.h>
int main() {
    //using bitwise operator 
    int n = 50;
    if ((n & 1) == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}