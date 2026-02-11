#include <iostream>
using namespace std;
int main() {

    int n , reverse = 0, reminder;

    cout << "Enter a number:";
    cin >> n;

    while (n != 0) {
        reminder = n%10;

        reverse = reverse*10 + reminder;
        n = n/10;
    }

    cout << " Reverse of the number is " << reverse << endl;
     return 0;
    
}