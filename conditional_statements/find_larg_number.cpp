#include <iostream>
using namespace std;

int main() {

    int a , b ,c;
    cout << " Enter the three numbers:" << endl;
    cin >> a >> b >> c;

     if (a > b && a > c) {
        cout << a << " is largest number."<<endl;

        
     }
     else if (b > a && b > c) {
        cout << b << " is largest number."<<endl;
     }
     else {
        cout << c << " is largest number."<<endl;
     }
     return 0;
}