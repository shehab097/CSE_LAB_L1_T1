#include<stdio.h>
int main() {
    //
    int n;
    printf("Enter a number:: ");
    scanf("%d", &n);
    int sum = 0;
    
    while (n != 0) {
        int ele = n % 10;
        n = n / 10;
        sum = sum + ele;
    }
    printf("sum of digit:: %d\n", sum);
    return 0;
}