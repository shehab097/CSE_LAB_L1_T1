#include <stdio.h>
#include<stdlib.h>

int main() {

    printf("\nEnter size: ");
    int size;
    scanf("%d", &size);

    // enter arr element
    int* arr = (int*)malloc(sizeof(int) * size);
    printf("\nEnter array element(%d): ", size);
    for (int i = 0;i < size;i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter target index: ");
    int target;
    scanf("%d", &target);

    printf("\nEnter value: ");
    int ele;
    scanf("%d", &ele);

    arr = (int*)realloc(arr, sizeof(int) * (size + 1));
    size++;

    int index = 0;

    //shifting element form end
    for (int i = size - 1;i >= target;i--) {
        arr[i + 1] = arr[i];
    }
    arr[target] = ele;

    for (int i = 0;i < size;i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}