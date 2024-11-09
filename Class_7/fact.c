#include <stdio.h>
#define ll long long

ll int fact(int n) {
    if (n < 0) {
        printf("Invalid input!");
        return 0;
    }
    
    else if (n == 0 || n == 1) {
        return 1;
    }

    return n * fact(n - 1);
}

int main() {
    printf("Enter n (n<0):: ");
    int n;
    scanf("%d", &n);

    printf("%d! = %d",n, fact(n));
    return 0;
}