// Base class       -> parent class,super class, root class
// Derived class    -> child class, sub class
// Is a relationship
// Generalisation vs Specialisation 
//
//
//              A
//             /  \
//            /    \    Generalisation increases up the tree
//           B      C   Specialisation increases down the tree
//                  |
//                  D
//                  |
//                  E
//
//
// Deriving classes from existing class
// public       -> is a relationship
// private      -> has a relationship
// protected    -> has a relationship
//
// Access with public inheritance
//  
//      Base class          Access in derived class
//      
//      public a                    public a
//      proteted b                  protected b
//      private c                   no access
//
// Access with protected inheritance
//  
//      Base class          Access in derived class
//      
//      public a                    protected a
//      proteted b                  protected b
//      private c                   no access
//
//
// Access with private inheritance
//  
//      Base class          Access in derived class
//      
//      public a                    private a
//      proteted b                  private b
//      private c                   no access
//

#include <iostream>
using namespace std;

class Base{
    // baae class members
};


class Derived: public Base{
    // derived class members
};


class Account{
    public:
  
        Account(){
            cout<<"No args constructor called"<<endl;
        }
  
        ~Account(){
            cout<<"Destructor called"<<endl;
        }
  
        double balance;
        void deposit(double bal);
        void withdraw(double bal);

};

class SavingAccount: public Account{
    public:
        SavingAccount(){
            cout<<"Savings account constructor called"<<endl;
        }
        ~SavingAccount(){
            cout<<"Savings account destructor called"<<endl;
        }

        void deposit(double bal);
        void withdraw(double bal);

};



void Account:: deposit(double bal){
    cout<<"Deposit method called from account"<<endl;
}

void Account:: withdraw(double bal){
    cout<<"Withdraw method called from account"<<endl;
}

void SavingAccount:: deposit(double bal){
    cout<<"Deposit method called from saving account"<<endl;
}

void SavingAccount:: withdraw(double bal){
    cout<<"Withdraw method called from saving account"<<endl;
}


int main(){

    Account a{};
    a.withdraw(100.0);
    a.deposit(200.0);

    {
        SavingAccount sa{};
        sa.withdraw(100.0);
        sa.deposit(200.0);
    }

    cout<<"FINISH"<<endl;


    return 0;
}