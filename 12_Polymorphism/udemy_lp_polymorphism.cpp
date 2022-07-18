#include<iostream>
// virtual keyword
// virtual functions are overridden

// Declaring virtual functions:
// 1. override the function in derived class
// 2. Function signature and return type should 
//    match exactly
// 3. Virtual keyword not required but best 
//    practice
// 4. If you do not provide an overriden version
//    it is inherited from base class.
using namespace std;

class Base{
    public:
        void say_hello() const{
            cout<<"Hi from base constructor"<<endl;
        }
};

class Derived:public Base{
    public:
        void say_hello() const{
            cout<<"Hi from derived constructor"<<endl;
        }
};

void greetings(Base &obj){
    obj.say_hello();   
}

class Account{
    private:
        int balance;
    public:
        virtual void withdraw(double amount){
            cout<<"Account withdrew "<<amount<<endl;
        }

        virtual ~Account();

};

class Checking:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"Checking withdrew "<<amount<<endl;
        }
};

class Saving:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"Saving withdrew "<<amount<<endl;
        }
};

class Trust:public Account{
    public:
        virtual void withdraw(double amount){
            cout<<"Trust withdrew "<<amount<<endl;
        }
};

class Trust2:public Account{
    public:
};

int main(){
    // Base *b{nullptr};
    // Derived *d{nullptr};
    // greetings(*d);   

    Account *ptr1 = new Account();
    Account *ptr2 = new Checking();
    Account *ptr3 = new Saving();
    Account *ptr4 = new Trust();
    Account *ptr4_2 = new Trust2();
    

    ptr1->withdraw(100);
    ptr2->withdraw(200);
    ptr3->withdraw(300);
    ptr4->withdraw(400);
    ptr4_2->withdraw(404);


    return 0;
}