#include <stdio.h>

int main() {

    printf("Enter sizeof array: ");
    int n;
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements: ");
    for (int i = 0;i < n;i++) {
        scanf("%d", &arr[i]);
    }

    printf("---------\n");
    for (int i = 0;i < n;i++) {
        if (arr[i] % 2 != 0)
            printf("%d ", arr[i]);
    }

    return 0;
}
