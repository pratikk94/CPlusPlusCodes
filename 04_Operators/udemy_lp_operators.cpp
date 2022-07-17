// Arithmatic operators.
// + , - , * , /

// Assignment operator.
// =

// Incremenet/Decrememnt operators.
// object++(POST) and ++object(PRE)

// Explicit type casting -static_cast<type>

#include<iostream>

using namespace std;

int main(){

    int variable = 20;
    // pre increment
    int result = ++variable;
    cout<<"Pre increment"<<endl;
    cout<<"Value of variable ->"<<variable<<endl;
    cout<<"Value of result   ->"<<result<<endl;

    // post increment also an example of demottion.
    variable = 20.1;
    result = variable++;
    cout<<"Post increment"<<endl;
    cout<<"Value of variable ->"<<variable<<endl;
    cout<<"Value of result   ->"<<result<<endl;
    


    // example of static cast.
    int sum = 100;
    int no = 8;
    double avg;

    avg = sum/no;

    cout<<"Average is (without static cast) : "<<avg<<endl;


    avg = static_cast<double>(sum)/no;
    
    cout<<"Average is (with static cast) :"<<avg<<endl;

    return 0;

}