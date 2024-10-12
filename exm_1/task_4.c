#include <stdio.h>

int main() {

    for (int i = 2; i <= 7;i++) {

        int x = 3 * i * 3;
        if (x % 2 == 0) {
            printf("%d\n", x);
        }
        else {
            printf("%d\n", (-1) * x);
        }
    }
    return 0;
}