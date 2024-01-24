/*Create a BankAccount class with methods to deposit, withdraw, and check the balance. Implement error checking to prevent overdrafts.*/
#include<iostream>
#include<iomanip>
using namespace std;
class Bank
{
    private:
    double balance;
    public:
    Bank():balance(25000.00){}
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        {
            cout<<"Invalid input";
        }
    }
    void withdraw(double amount)
    {
        if(amount>0)
        {
            balance-=amount;
        }
        else
        {
            cout<<"Invalid input";
        }
    }
    double getBalance()
    {
        return balance;
    }
};
int main()
{
    Bank bank;
    double amount;
    int choice;
    cout<<"0 for deposit.......1 for withdraw"<<endl;
    cin>>choice;
    if(choice==0)
    {
        cout<<endl<<"Enter amount to deposit: ";
        cin>>amount;
        bank.deposit(amount);
    }
    else if (choice==1)
    {
        cout<<endl<<"Enter amount to withdraw: ";
        cin>>amount;
        bank.withdraw(amount);
    }
    double result=bank.getBalance();
    cout<<endl<<"Remaining balance: "<<result;
}