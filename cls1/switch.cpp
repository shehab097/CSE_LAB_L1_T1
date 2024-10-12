#include<stdio.h>
int main() {
    int a, b;
    char ch;
    printf("Enter operator (+,-,*,/,%) :: ");
    scanf("%c", &ch);

    printf("Enter (a and b) :: ");
    scanf("%d %d", &a, &b);

    switch (ch)
    {
    case '+':
        printf("a + b = %d\n", a + b);
        break;
    case '-':
        printf("a - b = %d\n", a - b);
        break;
    case '*':
        printf("a * b = %d\n", a * b);
        break;
    case '/':
        printf("a / b = %d\n", a / b);
        break;
    case '%':
        printf("a %% b = %d\n", a % b);
        break;
    
    default:
        printf("Invalid imput!\n");
        break;
    }
    return 0;
}