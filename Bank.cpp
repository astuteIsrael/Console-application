#include <iostream>
#include <iomanip>
#include <cctype>

using namespace std;

void displayMenu() {
    cout << "----------------Menu----------------"<< endl;
    cout << "1. Show Balance"<< endl;
    cout << "2. Deposit"<< endl;
    cout << "3. Withdraw"<< endl;
    cout << "4. Transfer"<<endl;
    cout << "5. Exit"<<endl;
    
    cout << "-------------------------------------"<< endl;
    cout << "These are the options!" << endl;
}

void showBalance(double currentBalance) {
    cout << "Your current balance is #" << fixed << setprecision(2) << currentBalance;
}

void deposit(double currentBalance) {
    
    double newAmount;

    cout << "What is the amount you want to deposit(#): ";
    cin >> newAmount;

    if (newAmount < 0) {
        cout << "That amount is too low!";
    }

    else if (isalpha(newAmount)) {
        cout << "invalid input you can't input an alphabet!!";
    }

    else{
        currentBalance += newAmount;
        cout << "You've successfully deposited " << fixed << setprecision(2) << newAmount;
    }
    
}

int main() {

    displayMenu();
    cout << endl;

    double currentBalance = 0;

    int option;
    cout << "Enter the # operation you would like to perform: ";
    cin >> option;

    switch (option)
    {
    case 1: 
        showBalance(currentBalance);
        break;

    case 2:
        deposit(currentBalance);
        break;
    
    default:
        break;
    }
    return 0;
}