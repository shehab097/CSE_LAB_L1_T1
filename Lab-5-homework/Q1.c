#include<stdio.h>

// Input 10 var in a array
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

// Sum up the array elements
int sumOfArray(int* arr, int size) {
    int sum = 0;

    for (int i = 0;i < size;i++) {
        sum += arr[i];
    }
    return sum;
}

// Sort the array element
void sortArray(int* arr, int size) {

    for (int i = 0;i < size;i++) {
        for (int j = 0;j < size - i - 1;j++) {
            if (arr[j] > arr[j + 1]) {
                // swap them
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void deleteArrayElement(int* arr, int size,int target) {
    int index = 0;
    for (int i = 0;i < 10;i++) {

        if (target == i) index++;
        arr[i] = arr[index++];
    }
}
// This is
// main function
int main() {

    int arr[10];
    int size = sizeof(arr) / 4;

    // input
    inputArray(arr, size);

    // print
    printArray(arr, size);

    // sum of array element
    printf("\n\nSum of all array element: %d\n", sumOfArray(arr, size));

    // sort array
    printf("\n\nSorting array: \n");
    sortArray(arr, size);
    printArray(arr, size); //print after sorting

    //delete element
    printf("\n\nSelect array index that you want to delete: ");
    int target;
    scanf("%d", &target);
    deleteArrayElement(arr, size, target);
    printArray(arr, size-1); //print 


    return 0;
}