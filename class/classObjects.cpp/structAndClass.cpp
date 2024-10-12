#include<iostream>
using namespace std;

class A {
public:
    int ia;
    int ib;
    int ic;
    string str;
};

int main() {
    A a = { 1,2,3,"wow" };
    cout << "ia is :" << a.ia << endl;
    cout << "ib is :" << a.ib << endl;
    cout << "ic is :" << a.ic << endl;
    cout << "ic is :" << a.str << endl;
    printf("%s\n", a.str.c_str());
    return 0;
}