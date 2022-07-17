// pass by reference. 
// 1. changes value of original variable

// function call stack

//        -------------------                 
//       |                   |
//       |                   |
//       |       Heap        |
//       |                   |
//       |                   |
//       |-------------------|
//       |                   |  Follows LIFO (last in first out).
//       |   Function call   |  Finite memory. Can result in stack overflow
//       |       stack       |  push pop mechanism . Every tiem function 
//       |                   |  is called a new activation record created
//       |-------------------|   
//       |  static variables |
//       |-------------------|
//       |                   |
//       |    code level     |
//       |                   |
//       |___________________|
//

#include<iostream>
using namespace std;

void swap(int &a,int &b);

int main(){
    int a,b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"before a : "<<a<<" before b : "<<b; 
    swap(a,b);
    cout<<"\n After a : "<<a<<" After b : "<<b<<endl; 
    return 0;
}

void  swap(int &a,int &b){
    int temp = a;
    a = b;
    b = temp;

}