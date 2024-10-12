#include<iostream>
using namespace std;

int main() {
    int x = 7;
    int c = 0;

    for (int i = 2;i <= x / 2;i++) {
        if (x % i == 0) {
            c++;
        }
    }

    printf("%d\n", c);
    if (c == 0) {
        
    }

    return 0;
}
