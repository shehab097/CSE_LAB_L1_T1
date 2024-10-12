#include<stdio.h>
#include<math.h>
int main() {
    double a;
    scanf("%lf", &a);

    //chk 
    if (sqrt(a) == (float)abs(sqrt(a))) {
        printf("perfect squre\n");
    }
    else {
        printf("not a perfect squre\n");
    }

    // printf("%lf\n", sqrt(a));
    // printf("%lf\n", (float)(int)sqrt(a));
    return 0;
}