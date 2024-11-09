#include <stdio.h>

int main() {
    int arr[10];
    for (int i = 0;i < 10;i++) {
        scanf("%d", &arr[i]);
    }

    int target ;
    printf("Enter target index: ");
    scanf("%d", &target);
    printf("\n");

    int index = 0;
    for (int i = 0;i < 10;i++) {
        if (i == target)index++;

        arr[i] = arr[index++];

    }



    for (int i = 0;i < 10 - 1;i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}