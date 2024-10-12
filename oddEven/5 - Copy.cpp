#include<stdio.h>
#include<math.h>

int main() {
    //without using bitwise and modulus operator 
    int num;
    scanf("%d", &num);

    double n = (float)num;

    if ((n / 2.0) - (float)(int)(n / 2.0) == 0) {
        printf("Even\n");
    }
    else {
        printf("Odd\n");
    }
    return 0;
}