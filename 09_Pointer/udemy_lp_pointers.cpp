// 1. Pointers are varaibles whose value is an address.
// 2. Pointers can address another variable/function.
// 3. size of pointer does not matter to it's datatype
// 4. All pointer sizes are same but the element where 
//    they point to are complex and different
// 5. A null pointer's value is 0
// 6. Dereferencing a pointer use the '*' symbol
// 7. Use delete keyword to free pointer memory
//    delete [] pointer pointer pointing to arry 
// 8. Relationship between arrays and pointers.
//    a. Value of array name is address of first element
//    b. Value of pointer variable is an address
//    both are same and can be used interchanegeably.

#include<iostream>
#include<vector>

using namespace std;

void double_data(int *intPtr);
int* largest_number(int *num1,int *num2);

int main(){

    //----------------Basics--------------------

    // int *pointer;                       // pointing anywhere
    // cout<<pointer<<endl;                // grabage  
    // cout<<&pointer<<endl;               // address of pointer p
    // cout<<sizeof(pointer)<<endl;

    // pointer = nullptr;                  // pointing nowhere
    // cout<<pointer<<endl;                // value of pointer p    
    
    //---------------- 3+4 ---------------------

    // cout<<"checking pointer sizes"<<endl;

    // double *doublePointer;
    // unsigned long long *longPointer;
    // cout<<sizeof(doublePointer)<<endl;
    // cout<<sizeof(longPointer)<<endl;

    //------------------------------------------


    //----If all pointer address are same -------
    //----can they be used for different  -------
    //----        datatypes?  NO          -------  

    // int *intPointer;

    // int lowTemp {10};
    // int highTemp {30};
    // double avg {20.0}; 

    // intPointer = &lowTemp;
    // // Compiler error: incompatible pointer types 
    // // assigning to 'int *' from 'double *'
    // // intPointer = &avg;


    //------------------------------------------

    //-------- Dereferencing a pointer ---------

    // int score {100};
    // int *scorePointer{&score};  
    // cout<<"Before : "<<*scorePointer<<endl;
    // score = 200;
    // cout<<"After  : "<<*scorePointer<<endl;

    //------------------------------------------

    //----------------Vector--------------------

    // vector<int> values = {10,20,30};
    // vector<int> *vPointer = &values;

    // for(auto val:*vPointer){
    //     cout<<val<<endl;
    // }

    //---------- Arrays vs Pointers -----------
    // int values[]{10,20,30};
    // int *arrayPtr = {values};

    // cout<<"Array name   ->"<<values<<endl;
    // cout<<"Pointer name ->"<<arrayPtr<<endl;

    // Also check following example
    // No * for getting ptr value.
    // cout<<"Second element from pointer"<<arrayPtr[1]<<endl;

    //-----Passing pointers to function-------
    // int val = 2;
    // int *valPtr = {&val};
    // cout<<*valPtr<<endl;
    // double_data(valPtr);
    // cout<<*valPtr<<endl;

    //-----Return pointers from function-------
    
    // int a=10,b=20;
    // int *ptr1{&a},*ptr2{&b},*ptr3{nullptr};
    // ptr3 = largest_number(ptr1,ptr2);

    // cout<<"Largest number is"<<*ptr3<<endl;

    return 0;
}

void double_data(int *intPtr){
    *intPtr *= 2;
}

int* largest_number(int *num1,int *num2){
    if(*num1>=*num2)
        return num1;
    else
        return num2;

}
