#include<iostream>
using namespace std;

class class1 {
    int i;
public:
    void setValue(int value) {
        i = value;
    }
    int getValue() {
        return i;
    }
};

int main() {
    int i = 47;
    class1 object1;
    object1.setValue(i);

    cout << "Value is : " << object1.getValue() << endl;
    return 0;


    return 0;
}