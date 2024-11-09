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

    return 0;
}