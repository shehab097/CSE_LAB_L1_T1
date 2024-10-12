#include<stdio.h>
int main() {

    int to;
    int frm;

    printf("From:: ");
    scanf("%d", &frm);

    printf("to:: ");
    scanf("%d", &to);

    for (int n = frm;n <= to;n++) {

        if (n == 0 || n == 1) continue;
        int isPrime = 1;

        for (int i = 2;i <= n/2;i++) {
            if (n % i == 0) {
                isPrime = 0;
            }
        }

        if (isPrime == 1) {
            printf("%d  ", n);
        }   
    }
    return 0;
}