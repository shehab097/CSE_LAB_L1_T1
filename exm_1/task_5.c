#include <stdio.h>

int main() {
    int sum = 0;

    for (int i = 1; i <= 500;i++) {
        if (i % 7 == 0 && i % 9 == 0) {
            sum += i;
        }
    }
    printf("sum:: %d\n", sum);
    return 0;
}