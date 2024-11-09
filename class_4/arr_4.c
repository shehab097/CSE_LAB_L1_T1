#include <stdio.h>

int main() {
    int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
    int new[10];

    for (int i = 0;i < 10;i++) {
        new[i] = arr[i];
    }

    for (int i = 0;i < 10;i++) {
        printf("%d ", new[i]);
    }
    return 0;
}