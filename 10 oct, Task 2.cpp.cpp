
#include <iostream>

using namespace std;


struct BankAccount {
    int accountNumber;
    string accountHolderName;
    double accountBalance;
};


void createAccount(BankAccount& account) {
    cout << "Enter Account Number: ";
    cin >> account.accountNumber;
    cout << "Enter Account Holder's Name: ";
    cin.ignore();
    getline(cin, account.accountHolderName);
    cout << "Enter Initial Account Balance: ";
    cin >> account.accountBalance;
}


void depositMoney(BankAccount& account, double amount) {
    account.accountBalance += amount;
    cout << "Deposited " << amount << " into the account." << endl;
}


void withdrawMoney(BankAccount& account, double amount) {
    if (account.accountBalance >= amount) {
        account.accountBalance -= amount;
        cout << "Withdrawn " << amount << " from the account." << endl;
    } else {
        cout << "Insufficient balance to withdraw " << amount << endl;
    }
}


void displayAccount(const BankAccount& account) {
    cout << "Account Number: " << account.accountNumber << endl;
    cout << "Account Holder's Name: " << account.accountHolderName << endl;
    cout << "Account Balance: " << account.accountBalance << endl;
}

int main() {
    BankAccount account;
    int choice;
    double amount;

    while (true) {
        cout << "\nBank Account Management Menu:" << endl;
        cout << "1. Create a new account" << endl;
        cout << "2. Deposit money" << endl;
        cout << "3. Withdraw money" << endl;
        cout << "4. Display account details" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            createAccount(account);
        } else if (choice == 2) {
            cout << "Enter the amount to deposit: ";
            cin >> amount;
            depositMoney(account, amount);
        } else if (choice == 3) {
            cout << "Enter the amount to withdraw: ";
            cin >> amount;
            withdrawMoney(account, amount);
        } else if (choice == 4) {
            displayAccount(account);
        } else if (choice == 5) {
            cout << "Exiting program. Goodbye!" << endl;
            return 0;
        } else {
            cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
