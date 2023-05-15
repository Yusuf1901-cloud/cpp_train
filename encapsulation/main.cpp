#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
        string accountNumber;
        double balance;
    public:
        BankAccount(const string &accNUmber) :accountNumber(accNUmber), balance(0.0){
            cout << "This is constructor for my class!!\n\n";
        }
        // constructor for BankAccount class!! happy coding ura
        void deposit(double amount){
            balance += amount;
        }
        void withdrow(double amount){
            balance -= amount;
        }
        double getBalance(){
            return balance;
        }
};


int main(){

    BankAccount myAccount("13434343434"); // contructor will work 
    
    myAccount.deposit(579.9);
    myAccount.withdrow(400.00);
    cout << myAccount.getBalance();

    return 0;
}