#include <iostream>
using namespace std;

int main() {

    int choose;
    double balance = 50000.00;
    double amount;

    cout << "Welcome to the ATM Machine!" << endl;
    cout << " Please select an option:" << endl;
    cout << " 1. Check Balance" << endl;
    cout << " 2. Withdraw" << endl;
    cout << " 3. Deposit Money" << endl;
    cout << " 4. Exit" << endl;

    cin >> choose;

    switch(choose) {

            case 1:
         
            cout << "Your current balance is: " << balance << "Rs." << endl;
            break;

            case 2:
            cout << "Enter the amount to withdraw:";
            cin >> amount;

            if (amount > balance) {
                cout << "Insufficient balance. Please thoda kam kamao."<< endl;

            }
            else {
                balance = balance - amount;
                cout << "Withdrawal successful. Your new balance is:" << balance << "Rs." << endl;
            }
            break;
            case 3:
            cout << "Enter the amount to deposit:";
            cin >> amount;
            balance = balance + amount;
            cout << "Deposit successful. Your new balance is:" << balance << "Rs." << endl;
            break;
            case 4:
            cout << " Thank You for using the ATM Machine. Have a nice day!" << endl;
            break;
            default:
            cout << " Invalid option. Please select a valid option." << endl;
    }

    return 0;
}