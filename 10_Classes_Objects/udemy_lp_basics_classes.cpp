// 1. arrow operator



#include<iostream>
#include<string>
#include<vector>

using namespace std;

class Player{
    //attributes 

    public:string name;
    public:int health;
    int xp;

    void talk(string);
    bool isDead();
};

int main(){
    //-------------------- 1 --------------------
    Player *p = {nullptr};
    p = new Player();
    (*p).name = "Pratik";               //----->1
    p->health = 100;                    //----->2

    // 1 and 2 are the same.

    cout<<p->name<<"\'s health is "<<p->health<<endl;
    return 0;
}