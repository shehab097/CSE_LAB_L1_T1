#include<stdio.h>
int main() {
    double a, x, b, y, z;
    printf("Enter 'a, x, b, y, z' :: ");
    scanf("%lf %lf %lf %lf %lf", &a, &x, &b, &y, &z);
    
    double Y = a * x * x + b * y + z;
    printf("Y = %lf\n", Y);
    return 0;
}