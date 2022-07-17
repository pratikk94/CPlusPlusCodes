// conditionals.

// if else statements

// switch statements

// conditional expression

#include<iostream>

using namespace std;

int main(){

    int num1{};
    int num2{};

    cout<<"Enter first number"<<endl;
    cin>>num1;

    cout<<"Enter second number"<<endl;
    cin>>num2;
    

    cout<<"greater number is"<<((num1>num2)? num1: num2)<<endl;

    if(num1>num2){
        cout<<"First number is greater"<<endl;
    }
    else if(num1 == num2){
        cout<<"Both are equal"<<endl;
    }
    else{
        cout<<"Second number is greater"<<endl;
    }


    // switch(control_exp){
        
    //     case expression1:
    //         break;

    //     case expression2:
    //         break;

    //     case expression3:
    //         break;

    //     case expression4:
    //         break;

    //     default:
            

    // }



    return 0;
}
