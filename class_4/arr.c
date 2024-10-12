#include <stdio.h>

int main() {
    int arr[50];

    int i = 0,
        sum = 0;


    printf("ADD: ");
    
    while ((scanf("%d", &arr[i++])) && arr[i - 1] != 0) {
        printf("sum:: %d\n", sum += arr[i - 1]);

        printf("ADD: ");
    }

    return 0;
}