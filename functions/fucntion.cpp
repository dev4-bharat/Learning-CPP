#include <iostream>
using namespace std;

void showMenu();
void checkBalance(double balance);
void deposit(double &balance);
void withdraw(double &balance);

int main() {
    double balance = 1000.00;
    int option;

    cout << "==================================" << endl;
    cout << "    Welcome to the ATM Service    " << endl;
    cout << "==================================" << endl;

    do {
        showMenu(); // Menu dikhayega
        
        cout << "\nSelect an option: "; // Yahan '\n' add kiya gap ke liye
        cin >> option;
        
        cout << "----------------------------------" << endl; // Separator line

        switch (option) {
            case 1:
                checkBalance(balance);
                break;
            case 2:
                deposit(balance);
                break;
            case 3:
                withdraw(balance);
                break;
            case 4:
                cout << "Thank you for using our ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid option. Please try again." << endl;
        }
        cout << "----------------------------------" << endl; // Neeche bhi separator

    } while (option != 4);

    return 0;
}

void showMenu() {
    // Menu se pehle thoda gap
    cout << "\n  ATM MENU " << endl;
    cout << "1. Check Balance" << endl;
    cout << "2. Deposit Money" << endl;
    cout << "3. Withdraw Money" << endl;
    cout << "4. Exit" << endl;
}

void checkBalance(double balance) {
    cout << "Your current balance is: $" << balance << endl;
}

void deposit(double &balance) {
    double amount;
    cout << "Enter amount to deposit: $";
    cin >> amount;

    if (amount > 0) {
        balance += amount;
        cout << ">> Deposit successful." << endl; 
        cout << ">> New Balance: $" << balance << endl;
    } else {
        cout << ">> Invalid amount." << endl;
    }
}

void withdraw(double &balance) {
    double amount;
    cout << "Enter amount to withdraw: $";
    cin >> amount;

    if (amount > balance) {
        cout << ">> Error: Insufficient funds." << endl;
    } else if (amount > 0) {
        balance -= amount;
        cout << ">> Withdrawal successful." << endl;
        cout << ">> New Balance: $" << balance << endl;
    } else {
        cout << ">> Invalid amount." << endl;
    }
}