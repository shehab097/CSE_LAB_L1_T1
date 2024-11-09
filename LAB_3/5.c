#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter n:: ");
    scanf("%d", &n);
    int new = 0;
    int temp = n;
    int old = n;
    int count = 0;

    while (temp != 0) {
        int ele = temp % 10;
        temp = temp / 10;
        count++;
    }

    while (count != 0) {
        int ele = n % 10;
        n = n / 10;
        count--;
        new = new + ele * pow(10, count);
    }

    if (new == old) {
        printf("%d is palindromic number. \n", new);
    }
    else {
        printf("%d is not a palindromic number. \n", new);
    }
    return 0;
}