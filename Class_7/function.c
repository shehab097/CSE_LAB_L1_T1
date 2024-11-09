#include <stdio.h>

char* check(int n) { //argument
    if (n % 2 == 0)
        return "even";
    else
        return "odd";
}

int main() {
    int num;
    scanf("%d", &num);
    printf("%s ", check(num)); //parameter
    return 0;
}