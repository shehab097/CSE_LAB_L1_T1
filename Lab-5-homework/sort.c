#include <stdio.h>
#include<conio.h>
#include "color.h"
int main() {
    // Your code goes here
    int arr[10] = { 0,1,2,3,4,5,6,7,8,9 };
    int target = 7;

    int index = 0;
    for (int i = 0;i < 10;i++) {

        if (target == i) index++;
        arr[i] = arr[index++];
    }

    printf("%s", RED);
    for (int i = 0;i < 10 - 1;i++) {
        printf("%d ", arr[i]);
    }
    printf("%s", RESET);
    return 0;
}