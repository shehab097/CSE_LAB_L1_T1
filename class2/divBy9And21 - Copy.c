#include<stdio.h>
int main() {
    //
    for (int i = 1;i <= 200;i++) {
        if (i % 9 == 0 && i % 21 == 0) {
            printf("%d\t", i);
        }
    }
    return 0;
}