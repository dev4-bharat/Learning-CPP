#include <iostream>

using namespace std;

int main() {

    int n = 10;

    int* ptr = &n;

    *ptr = 39;

    // pointer arthmetic
    int arr[] = {100,200,300,400};
    int* arrPtr = arr;
    cout << n<< endl;
    cout << "First element:" << *arrPtr << endl;
    cout << "Second element:" << *arrPtr << endl;
    return 0;

}