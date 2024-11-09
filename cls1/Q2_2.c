#include<stdio.h>
int main() {
    printf("Farenhiet to Celcuis\n");

    printf("Enter Temp in Farenhiet::");
    float c, f;
    scanf("%f", &f);

    c = (f - 32.0) * (5.0 / 9.0);

    printf("Celcuis temp :: %.2f\n", c);

    return 0;
}