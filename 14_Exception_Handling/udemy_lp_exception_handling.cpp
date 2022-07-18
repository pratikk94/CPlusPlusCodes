#include<iostream>

using namespace std;

int main(){


    int divident,divisor;
    cin>>divident;
    cin>>divisor;

    try{
        if(divisor == 0){
            throw 0;
        }
        else{
            cout<<divident/divisor;
        }
    }
    catch(int &exception){
        cout<<"Divide by zero exception"<<endl;
    }



}