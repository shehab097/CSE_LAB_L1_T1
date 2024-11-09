#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0;i < n;i++) {
        arr[i] = i+1;
    }

    for (int i = 0;i < n;i++) {
        if (arr[i] % 2 == 0) printf("%d ", arr[i]);
    }

    printf("\n");

    for (int i = 0;i < n;i++) {
        if (arr[i] % 2 != 0) printf("%d ", arr[i]);
    }

    return 0;
}

// 1 2 3 4 5 6 
// 6 1 2 3 4 5