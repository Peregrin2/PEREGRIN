#include <iostream>

using namespace std;


class Banker {
private:
    int balance;
public:

    Banker(int balances){
        balance = balances;
    }

    void Deposit(int amount){
        if (amount <= 0) {
            cout << "Invalid deposit amount!" << endl;
        } else {
            balance += amount;
        }
    }


    void Withdraw(int amount){
        if (amount <= 0) {
            cout << "Invalid withdraw amount!" << endl;
        } else if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else {
            balance -= amount;
        }
    }


    void showBalance() {
        cout<<endl;
        cout<<"======================================"<<endl;
        cout << "Current balance: " << balance << endl;
        cout<<"======================================"<<endl;
        cout<<endl;
    }


};

int main()
{
    Banker banker1(10000);

    while(true){
    int deposit,withdraw,choice;
    cout<<"======================================"<<endl;
    cout<<"[1.] Show Balance "<<endl;
    cout<<"[2.] Deposit "<<endl;
    cout<<"[3.] Withdraw "<<endl;
    cout<<"======================================"<<endl;
    cout<<"Enter Your Choice: ";

    cin>>choice;

    switch(choice){
    case 1:
        banker1.showBalance();
        break;
    case 2:
        cout<<"How much you want to deposit?: ";
        cin>>deposit;
        cout<<endl;

        banker1.Deposit(deposit);
        banker1.showBalance();

        break;

    case 3:
        cout<<"How much you want to Withdraw?: ";
        cin>>withdraw;
        cout<<endl;

        banker1.Withdraw(withdraw);
        banker1.showBalance();
        break;

    default:
        cout<<"Invalid Choice!"<<endl;
        continue;
    }


    char con;
    cout<<"Do you want to continue?[Y/N]: ";
    cin>>con;

    if(con == 'Y' || con == 'y'){
        continue;
    }else{
        cout<<"Thankyou !"<<endl;
        break;
    }

    }
    return 0;
}
