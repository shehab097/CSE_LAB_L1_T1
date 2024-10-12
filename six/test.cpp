#include<iostream>
using namespace std;

int main(){
    int x, y, z;

    x = 2, z = 4;
    y = ++x + x++; // 3 + 3
    printf("x :: %d\n", x);
    printf("y :: %d\n", y);

    return 0;
}
//why x = 7 ?
