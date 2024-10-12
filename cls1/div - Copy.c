#include<stdio.h>
int main() {
    int n;
    scanf("%d", &n);

    if (n % 5 == 0 || n % 9 == 0) {
        printf("%d is divisable by 9 or 5\n", n);
    }
    else {
        printf("%d is not divisable by 9 or 5\n", n);
    }
    return 0;
}