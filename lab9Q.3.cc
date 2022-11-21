// Create a class which stores account number, customer name and balance. 
// Derive two classes from ‘Account’ class: ‘Savings’ and ‘Current’. The ‘Savings’ class stores minimum balance. 
// The ‘Current’ class stores the over-due amount. Include member functions in the appropriate class for
// -deposit money
// -withdraw [For saving account minimum balance should be checked.]
// [For current account overdue amount should be calculated.] -display balance
// Display data from each class using virtual function.

#include <iostream>

using namespace std;

class Account{
    protected:
        int account_number;
        string customer_name; 
        double balance;
    public:
        void deposit(){
            int amount;
            cout<<"\nEnter amount to deposit: ";
            cin>>amount;
            balance=balance+amount;
        }
        
};


class Savings: public Account{
    private:
        double min_balance=500;
    
    public:    
        void withdraw(int balan){
            int amount1;
            int balan=balance;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount1;
            if (amount1<min_balance)
                cout<<"The minimum amount that can be withdrawn is "<<min_balance;
                
            else
                balance=amount1-balance;
                cout<<"\n Balance="<<balance;
        }
        //void display(){
           // cout<<"\nBalance= "<<balance;
        //}
    
};


class Current: public Account{
    private:
        double over_due_amount=500000;
        
    public:    
        void withdraw(){
            int amount2;
            cout<<"\nEnter amount to withdraw: ";
            cin>>amount2;
            if (amount2>over_due_amount)
                cout<<"\nThe maximum amount that can be withdrawn is "<<over_due_amount;
                
            else
                balance=balance-amount2;
        }
        void display(){
            cout<<"\nBalance= "<<balance;
        }
        
};


int main()
{
    Account a;
    a.deposit();
    
    int c;
    cout<<"1. Savings\n2. Current\nEnter your choice:";
    cin>>c;
    
    if (c==1){
        Savings s;
        s.withdraw();
        //s.display();
    }
    
    if (c==2){
        Current c;
        c.withdraw(); 
        c.display();
    }
    
    return 0;
}
