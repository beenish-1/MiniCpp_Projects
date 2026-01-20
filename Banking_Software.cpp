/*PROBLEM 
Banking Software — ATM Withdrawal Validation

In a banking application, write a function:
bool validateWithdrawal(balance, amount)

The function must check:
1. Amount must be multiple of 500.   
2. Amount must not exceed daily limit (20,000 PKR)
3. Account balance should be sufficient
If valid → return TRUE
Otherwise → FALSE with an error code/message.
Use another function to print meaningful messages.*/


#include<iostream>
using namespace std;

bool validateWithdrawal(int balance, int amount) {
    
    if(amount % 500 != 0) { 
        cout << "Amount must be in multiples of 500\n";
        return false;
    }
    if(amount > 20000) {
        cout << "Amount must be less than or equal to 20000\n";
        return false;
    }
    if(amount > balance) {
        cout << "Insufficient balance\n";
        return false;
    }

    cout << "Valid withdrawal\n";
    return true;
}

int main() {
    int balance, amount;
    cout << "Enter your balance: ";
    cin >> balance;
    cout << "Enter amount to withdraw: ";
    cin >> amount;

    validateWithdrawal(balance, amount);

    return 0;
}
