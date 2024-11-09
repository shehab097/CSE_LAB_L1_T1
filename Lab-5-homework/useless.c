#include <stdio.h>
#include<stdlib.h>
int main() {
    int* ptr;

    int i = 1;
    while (1)
    {
        ptr = malloc(i * 2);
    }
    
    return 0;
}