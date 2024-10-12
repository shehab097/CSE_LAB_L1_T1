#include<stdio.h>
int main() {
    //
    int arr[10];

    int i = 0;


    while (i++ < 10) {
        scanf("%d", &arr[i]);

    }

    printf("reverse order:: ");
    while (i-- != -1) {
        printf("%d ", arr[i]);
    }

    return 0;
}