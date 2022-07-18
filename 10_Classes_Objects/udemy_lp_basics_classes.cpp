// Class initilization with pointers
// 1. arrow operator
// 2. implicit method definition
// 3. Outside the class method definition.
// 4. Constructor
// 5. Destructor
// 6. Copy Constructor

#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //attributes 

    public:
        string name;
        int health;
        int xp;

        //default constructor
        Player(){

        }

        // parameterized constructor
        // "this" keyword 
        Player(string name){
            this->name = name;
        }

        //constructor overload with definiton outside
        Player(string name_val,int health_val,int xp_val);

        //Copy constructor
        Player(const Player &p);

        //destructor
        ~Player(){

        }

        //implicit method call
        void talk(string textToSay){
            cout<<name<<" says "<<textToSay<<endl;
        }
        
        bool isDead();
};

class Account{
    //attributes
    public:
        string name;
        double balance{};

        // construction initialization list
        Account(string name);


        //implicit method call
        void deposit(double bal){
            cout<<"In deposit"<<endl;
            balance = balance+bal;
            cout<<"Balance is "<<balance<<endl;
        };

        //implicit method call
        void withdraw(double bal){
            cout<<"In withdraw"<<endl;
            if(checkBalance(bal)){
                balance = balance-bal;
                cout<<"Balance is "<<balance<<endl;
            }
            else{
                cout<<"Insufficient balance"<<endl;
            }
        }

        bool checkBalance(double bal);

};
// outside the class implementation.
bool Account::checkBalance(double bal){
    if(balance- bal >0){
        return true;
    }
    else
        return false;
}

Player :: Player(string name_val,int health_val,int xp_val){
    name = name_val;
    health = health_val;
    xp = xp_val;
}

Player :: Player(const Player &p): name{p.name},health{p.health},xp {p.xp}{
    cout<<"Copy constructor called";
}

Account :: Account(string name_val) :name{name_val},balance{0}{
    cout<<name_val<<endl;
} 


int main(){
    //-------------------- 1 --------------------
    Player *p = {nullptr};
    p = new Player("Sayali");

    cout<<p->name<<endl;

    (*p).name = "Pratik";               //----->1
    p->health = 100;                    //----->2

    // 1 and 2 are the same.

    cout<<p->name<<"\'s health is "<<p->health<<endl;
    p->talk("Hello there");
 
    Player *p2 = {nullptr};
    p2 = new Player("Pratik",100,20);

    Player newPlayer(*p2);
    cout<<newPlayer.name<<endl;

    Account *a = {nullptr};

    string accountName;
    cin>>accountName;

    a = new Account(accountName);

    a->deposit(100);
    a->withdraw(150);

    return 0;
}