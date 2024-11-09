#include<stdio.h>
#include<math.h>

int main() {
    //
    int num = 121;
    int temp = num;
    int temp2 = num;
    int len = 0;
    int ans = 0;

    //lenght of number
    while (temp != 0) {
        temp = temp / 10;
        len++;
    }

    while (temp2 != 0) {
        int mod = temp2 % 10;
        temp2 = temp2 / 10;
        ans = ans + pow(mod, len);
    }


    if (num == ans) {
        printf("\n%d is and armstrong number.",num);
    }
    else {
        printf("\n%d is not ans armstrong number.",num);
    }
    return 0;
}