#include<stdio.h>
#include<math.h>
int main() {

    int a;
    scanf("%d", &a);
    float root_f = sqrt(a);
    int root_i = sqrt(a);

    if (root_f * root_f == root_i * root_i) {
        printf("%d is perfect squre\n",a);
    }
    else {
        printf("%d is not a perfect squre\n",a);
    }
    return 0;
}