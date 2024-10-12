#include<stdio.h>
int main() {
    int x, y = 0, z;
    printf("x = 2, z = 4\n\n");

    x = 2, z = 4;
    y = ++x + x++;// expectrd: 3+3 
    printf("a :: %d\n", y);

    x = 2, z = 4;;
    y = ++x + ++x;// expected 3+4   
    printf("b :: %d\n", y);

    x = 2, z = 4;
    y = ++x + ++x + ++x;// expected 3+4+5   
    printf("c :: %d\n", y);

    x = 2, z = 4;
    y = x > z;/*
    x > z is false, so y = 0
    */
    printf("d :: %d\n", y);

    x = 2, z = 4;
    y = x > z ? x : z;/*
    x>z or 2>4 equalto= 0 means false
    so z = 4
    */
    printf("e :: %d\n", y);

    x = 2, z = 4;
    y = x & z;/* bitwise and
    x = 0010   z = 0100   y = x&z = 0000 = 0(ans)
    */
    printf("f :: %d\n", y);

    x = 2, z = 4;
    y = x >> 2 + z << 1;/*
    first 2+z = 6
    x>>6<<1
    then 6<<1 = 12
    then x>>12 =0

    so, y = 0
    */
    printf("g :: %d\n", y); //3 4 2

    return 0;
}