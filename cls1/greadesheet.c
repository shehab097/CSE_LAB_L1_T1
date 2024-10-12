#include<stdio.h>
int main() {
    int n;
    printf("Enter number :: ");
    scanf("%d", &n);

    if (n <= 100 && n >= 0) {
        if (n >= 80) printf("A+\n");
        else if (n >= 70) printf("A\n");
        else if (n >= 60) printf("A-\n");
        else if (n >= 50) printf("B\n");
        else if (n >= 40) printf("C\n");
        else if (n >= 33) printf("D\n");
        else printf("F\n");
    }
    else {
        printf("Wrong input!\n");
    }
}