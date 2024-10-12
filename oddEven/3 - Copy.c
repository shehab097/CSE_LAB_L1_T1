#include<stdio.h>
int main() {
    //using bitwise operator 
    int n;
    scanf("%d", &n);
    if ((n & 1) == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}