#include <iostream>
using namespace std;

int balance = 100;

int main() {

    int balance = 20;

    short int limit = 32767;
    limit = limit + 1;
    cout <<"Balance:" << balance << endl;
    cout << "Balance:" << ::balance << endl;
    cout << "Transaction limit:" << limit<< endl;

    return 0;

}