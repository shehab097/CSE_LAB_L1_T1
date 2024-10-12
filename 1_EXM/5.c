#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("Enter n:: ");
    scanf("%d", &n);
    int line = 0;
    int new = 0;

    //size
    int temp = n;
    while (temp != 0) {
        temp /= 10;
        line++;
        // printf("temp: %d\n", temp);
    }
    printf("line :: %d\n", line);

    temp = n;
    while (temp != 0) {
        int last_dgt = temp % 10;
        temp /= 10;

        // printf("last dgt:: %d\n", last_dgt);
        line--;
        new = new + last_dgt * pow(10, line);
    }

    printf("ans :: %d\n", new);



    return 0;
}