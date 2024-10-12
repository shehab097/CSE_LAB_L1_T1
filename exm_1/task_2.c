#include <stdio.h>

int main() {
    printf("Printing 10 even no.\n");

    int count = 0;
    for (int i = 1; 1 ;i++) {
        if (i % 2 == 0) {
            printf("%d\n", i);
            count++;
            
            if (count == 10) break;
        }
        
    }
    return 0;
}