#include<iostream>

using namespace std;

class BankAccout {
    private:
        double balance;
    public:
        BankAccout(double initial) {
            balance = initial;
        }
        
        void deposit(double amount) { 
            if(amount > 0)
                balance += amount;
        }

        void withdraw(double amount) {
            if(amount > 0 && amount <= balance)
                balance -= amount;
        }

        double getBalance() const {
            return balance;
        }
};

int main() {
    BankAccout acc(234);
    acc.deposit(34);
    acc.withdraw(23);
    cout << "Balance: " << acc.getBalance() << endl;
    return 0;
}
