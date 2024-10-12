#include<stdio.h>
#include<math.h>

int main() {
    int n;//123
    printf("Enter n:: ");
    scanf("%d", &n);

    int new = 0;//
    int temp = n;//123
    int count=0;//size = 300+20+1


    while (temp != 0) {
        int ele = temp % 10;
        temp = temp / 10;
        // printf("%d\n", temp);
        count++;
    }
    
    while (count!=0) {
        int ele = n % 10;//1
        n = n / 10;//1
        // printf("-- %d\n", n);
        count--;
        new = new + ele*pow(10, count);
    }
    printf("reverse::  %d", new);
    return 0;
}