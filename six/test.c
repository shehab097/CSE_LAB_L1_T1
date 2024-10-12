#include<stdio.h>
int main() {
    int x, y = 0, z;
    printf("x = 2, z = 4\n\n");

    x = 2, z = 4;
    y = ++x + x++;// expected: 3 + 3
    // Here, x is incremented before the first addition (++x) making it 3, 
    // and then after the addition, x is incremented again (x++).
    // This means that x is incremented to 3 before the first use, then the sum is 3 + 3.
    printf("a :: %d\n", y); // a :: 6

    x = 2, z = 4;
    y = ++x + ++x;// expected 3 + 4
    // Here, x is incremented before both additions (++x), 
    // so x becomes 3 before the first addition and 4 before the second addition.
    printf("b :: %d\n", y); // b :: 7

    x = 2, z = 4;
    y = ++x + ++x + ++x;// expected 3 + 4 + 5
    // Here, x is incremented before each addition (++x), 
    // so x becomes 3 before the first addition, 4 before the second, and 5 before the third.
    printf("c :: %d\n", y); // c :: 12

    x = 2, z = 4;
    y = x > z;/*
    x > z is false, so y = 0
    */
    printf("d :: %d\n", y); // d :: 0

    x = 2, z = 4;
    y = x > z ? x : z;/*
    x > z or 2 > 4 equals 0 (false),
    so the result of the ternary operator is z = 4
    */
    printf("e :: %d\n", y); // e :: 4

    x = 2, z = 4;
    y = x & z;/* bitwise and
    x = 0010   z = 0100   y = x & z = 0000 = 0
    */
    printf("f :: %d\n", y); // f :: 0

    x = 2, z = 4;
    y = x >> 2 + z << 1;/*
    Order of operations:
    1. 2 + z = 6 (addition first because of higher precedence)
    2. x >> 6 << 1
    3. x = 2 in binary (0010)
    4. Shift right by 6 positions (all bits are shifted out, resulting in 0)
    5. Shift left by 1 position (0 << 1 is still 0)
    so, y = 0
    */
    printf("g :: %d\n", y); // g :: 0

    return 0;
}
