#include <iostream>
using namespace std;

class BankAccount {

private :
    int ac_no;
    string ac_holder;
    int balance;

public :

    BankAccount(int ac_no, string ac_holder, int balance)
    {
        this->ac_no = ac_no;
        this->ac_holder = ac_holder;
        this->balance = balance;
    }

    // Function For Deposit the amount.
    void deposit(int deposit)
    {
        this->balance += deposit;

        cout << "Amount Deposited !" << endl;
        cout << "Your Balance is : " << balance << endl;
    }

    // Function For Withdraw the amount.
    void withdraw(int amount)
    {

        if (balance >= amount)
        {
            balance -= amount;

            cout << "Withdrawal successful !" << endl;
            cout << "Now Your Balance is : " << balance << endl;
        }
        else
        {
            cout << "Insufficient balance !" << endl;
        }

    }

    // Function For Display the Account Details.
    void getAccountDetails()
    {
        cout << "---------- Account Details ----------" << endl;

        cout << "Account Number : " << ac_no << endl;
        cout << "Account Holder's Name : " << ac_holder << endl;
        cout << "Balance : " << balance << endl;
    }

};

int main()
{
    int amount,deposit;

    BankAccount jethalal(1234, "jethalal", 50000);
    BankAccount bhide(420, "Bhide", 30000);
    BankAccount popatlal(4567, "Popatlal", 700);
    

    // This is For Object 1 (Jethalal).
    jethalal.getAccountDetails();

    cout << endl;
    cout << "---------- Deposit Details ----------" << endl;
    cout << "Enter The Amount You Want to be Deposit : ";
    cin >> deposit;
    cout << endl;
    jethalal.deposit(deposit);

    cout << endl;
    cout << "---------- Withdraw Details ----------" << endl;
    cout << "Enter The Amount You Want to be Withdraw : ";
    cin >> amount;
    cout << endl;
    jethalal.withdraw(amount);


    // This is For Object 2 (Bhide).
    cout << endl;
    cout << endl;
    bhide.getAccountDetails();

    cout << endl;
    cout << "---------- Deposit Details ----------" << endl;
    cout << "Enter The Amount You Want to be Deposit : ";
    cin >> deposit;
    cout << endl;
    bhide.deposit(deposit);

    cout << endl;
    cout << "---------- Withdraw Details ----------" << endl;
    cout << "Enter The Amount You Want to be Withdraw : ";
    cin >> amount;
    cout << endl;
    bhide.withdraw(amount);


    // This is For Object 3 (Popatlal).
    cout << endl;
    cout << endl;
    popatlal.getAccountDetails();

    cout << endl;
    cout << "---------- Deposit Details ----------" << endl;
    cout << "Enter The Amount You Want to be Deposit : ";
    cin >> deposit;
    cout << endl;
    popatlal.deposit(deposit);

    cout << endl;
    cout << "---------- Withdraw Details ----------" << endl;
    cout << "Enter The Amount You Want to be Withdraw : ";
    cin >> amount;
    cout << endl;
    popatlal.withdraw(amount);
}