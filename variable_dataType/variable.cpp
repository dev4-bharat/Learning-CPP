#include <iostream>
using namespace std;

int main() {

    int a(21);
    char b = 'B';
    float c = 94.4;
    double d = 87.76;
    bool e = true;
    cout << "Size of this value:" << sizeof(a) <<endl;
    cout << "Size of this value:" << sizeof(b) <<endl;
    cout << "Size of this value:" << sizeof(c) <<endl;
    cout << "Size of this value:" << sizeof(d) <<endl;
    cout << "Size of this value:" << sizeof(e) <<endl;
    
    cout << " Address of a:" << &a << endl;
    cout << " Address of b:" << (void*)&b << endl;
    cout << " Address of c:" << &c << endl;
    cout << " Address of d:" << &d << endl;
    cout << " Address of e:" << &e << endl;

    return 0;
}