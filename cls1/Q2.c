#include<stdio.h>
int main() {
    printf("Celsius to Farenhiet\n");

    printf("Enter Temp in Celcuis::");
    float c, f;
    scanf("%f", &c);
    f = (9.0 / 5.0) * c + 32.0;
    printf("Farenhiet temp :: %.2f\n", f);

}