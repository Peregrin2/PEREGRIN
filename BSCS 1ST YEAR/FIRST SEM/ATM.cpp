#include <iostream>
#include <cstdlib> 
using namespace std;

int main() {
    string AccountNum = "02022024";  
    string Atmpass = "0202";         
    string inputAcc, inputPin;       
    int attemp = 4;
    int choice;
    int withdraw;
    int deposit = 0;
    int balance = 1000;

    system("cls");
    cout << "\n--- ATM Account ---" << endl;


    while (attemp > 0) {
        cout << "You have " << attemp << " attempt(s) left" << endl;
        cout << "Enter Your Number: ";
        cin >> inputAcc;

        cout << "Enter Your Pin: ";
        cin >> inputPin;


        if (inputAcc.length() != 8) {
            cout << "Account Number must be 8 digits" << endl;
            attemp--;
            system("pause");
            system("cls");
            continue;
        }

        if (inputPin.length() != 4) {
            cout << "PIN must be 4 digits" << endl;
            attemp--;
            system("pause");
            system("cls");
            continue;
        }

        if (inputAcc == AccountNum && inputPin == Atmpass) {
            cout << "Login Successful!" << endl;
            system("pause");
            system("cls");
            break;
        }
        else {
            cout << "Wrong Number or PIN" << endl;
            attemp--;
            system("pause");
            system("cls");

            if (attemp == 0) {
                cout << "You have no attempt(s) left. Exiting the program..." << endl;
                return 0;
            }
        }
    }


    do {
        cout << "\n--- Choose One ---" << endl;
        cout << "[1.] Balance" << endl;
        cout << "[2.] Withdraw" << endl;
        cout << "[3.] Deposit" << endl;
        cout << "[4.] Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Your Balance is: " << balance << endl;
            system("pause");
            system("cls");
            break;

        case 2:
            cout << "Enter amount to withdraw: ";
            cin >> withdraw;
            if (withdraw > balance) {
                cout << "Insufficient Balance" << endl;
            }
            else if (withdraw <= 0) {
                cout << "Invalid amount." << endl;
            }
            else {
                balance -= withdraw;
                cout << "You withdrew " << withdraw << endl;
                cout << "Your new balance is: " << balance << endl;
            }
            system("pause");
            system("cls");
            break;

        case 3:
            cout << "Enter amount to deposit: ";
            cin >> deposit;
            if (deposit <= 0) {
                cout << "Invalid amount." << endl;
            }
            else {
                balance += deposit;
                cout << "You deposited " << deposit << endl;
                cout << "Your new balance is: " << balance << endl;
            }
            system("pause");
            system("cls");
            break;

        case 4:
            cout << "Exiting the program..." << endl;
            return 0;

        default:
            cout << "Invalid Input. Please try again." << endl;
            system("pause");
            system("cls");
        }

    } while (true);

    return 0;
}
