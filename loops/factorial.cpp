#include <iostream>
using namespace std;
int main() {

    int n;
    long long factorial = 1;

    cout << "Enter a number:";
    cin >>n;

    if (n<0) {
        cout << "Error! No factorial for negative numbers." << endl;
    } else {
        for (int i = 1; i <= n; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << n << " is " << factorial << endl;
    }
}