#include <stdio.h>

void inputArray(int* arr, int size) {

    printf("\nEnter %d element of array: \n", size);
    for (int i = 0;i < size;i++) {
        scanf("%d", &arr[i]);
    }
}

// display an array
void printArray(int* arr, int size) {

    printf("\nPrinting array: ");
    for (int i = 0;i < size;i++) {
        printf("%d ", arr[i]);
    }
}

void deleteArrayElement(int* arr, int size, int target) {
    int index = 0;
    for (int i = 0;i < 10;i++) {

        if (target == i) index++;
        arr[i] = arr[index++];
    }
}


int main() {
    int arr[10];
    int size = sizeof(arr) / 4;

    // input
    inputArray(arr, size);


    //delete element
    printf("\n\nSelect array index that you want to delete: ");
    int target;
    scanf("%d", &target);
    deleteArrayElement(arr, size, target);
    printArray(arr, size - 1); //print 

    
    return 0;
}