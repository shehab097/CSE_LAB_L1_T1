#include<stdio.h>
int main() {
    int arr[3];
    for (int i = 0;i < 3;i++) {
        scanf("%d",&arr[i]);
    }

    for (int i = 0;i < 3;i++) {
        printf("%d\t", arr[i]);
    }
    printf("\n");

    for (int i = 3-1;i >= 0;i--) {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}