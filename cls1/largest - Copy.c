#include<stdio.h>
int main() {
    //
    int a, b, c;
    printf("Enter a,b,c ::");
    scanf("%d %d %d", &a, &b, &c);

    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }

    printf("Max :: %d\n", max);

    return 0;
}