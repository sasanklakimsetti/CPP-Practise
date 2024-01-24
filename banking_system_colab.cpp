#include <iostream>

using namespace std;

class Account
{
protected:
    int balance;

public:
    Account(int balance)
    {
        this->balance = balance;
    }

    virtual void deposit(int amount) = 0;
    virtual void withdraw(int amount) = 0;
    virtual int getBalance() = 0;
};

class SavingsAccount : public Account
{
public:
    SavingsAccount(int balance) : Account(balance) {}

    void deposit(int amount) override
    {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(int amount) override
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }
    }

    int getBalance() override
    {
        return balance;
    }
};

class CheckingAccount : public Account
{
public:
    CheckingAccount(int balance) : Account(balance) {}

    void deposit(int amount) override
    {
        balance += amount;
        cout << "Amount deposited: " << amount << endl;
    }

    void withdraw(int amount) override
    {
        if (balance >= amount)
        {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient funds. Withdrawal canceled." << endl;
        }
    }

    int getBalance() override
    {
        return balance;
    }
};

int main()
{
    int choice;
    int amount;
    SavingsAccount savingsAccount(0);
    CheckingAccount checkingAccount(0);

    do
    {

        cin >> choice;

        switch (choice)
        {
        case 1:
            cin >> amount;

            if (amount >= 0)
            {
                savingsAccount.deposit(amount);
            }
            else
            {
                cout << "Invalid amount. Please try again." << endl;
            }

            break;

        case 2:
            cin >> amount;

            if (amount >= 0)
            {
                if (savingsAccount.getBalance() >= amount)
                {
                    savingsAccount.withdraw(amount);
                }
                else
                {
                    cout << "Insufficient funds. Withdrawal canceled." << endl;
                }
            }
            else
            {
                cout << "Invalid amount. Please try again." << endl;
            }

            break;

        case 3:
            cout << "Savings Account Balance: " << savingsAccount.getBalance() << endl;
            break;

        default:
            if (choice != 0)
            {
                cout << "Invalid choice. Please try again." << endl;
            }
        }
    }
    while (choice != 0);

    cout << "Exiting the program. Goodbye!" << endl;

    return 0;
}

