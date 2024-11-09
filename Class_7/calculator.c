#include <stdio.h>

float add(float a, float b) {
    return a + b;
}
float sub(float a, float b) {
    return a - b;
}
float mul(float a, float b) {
    return a * b;
}
float div(float a, float b) {
    return a / b;
}

int main() {
    float a, b;
    scanf("%f %f", &a, &b);

    printf("%.2f\n", add(a, b));
    printf("%.2f\n", sub(a, b));
    printf("%.2f\n", mul(a, b));
    printf("%.2f\n", div(a, b));
    return 0;
}