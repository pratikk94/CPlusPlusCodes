// -------------------  Section 1  ----------------------------

// What is variable?
// 1. variable is abstraction for a memory location.
// 2. allow programmers to use meaningful name to memory address.
// 3. must be declared before being used in program.

// -------------------  Section 2  ----------------------------

// Syntax of varible declaration
// <variable type> varabile_name

// -------------------  Section 3  ----------------------------

// can contain letter number(cannot begin a 
// variable name) and underscore and no spaces between name

// -------------------  Section 4  ----------------------------


// types of initialization 
// int age = 28         C style initialization
// int age = (28)       Construcor style initialization
// int age = {28}       C++ 11 list initialization   

// -------------------  Section 5  ----------------------------

// fundamental data type
// 1. int -> signed and unsigned
// 2. floating point
// 3. character type
// 4. boolan type 

// size and precision is often compiler dependant.

// -------------------  Section 6  ----------------------------

// Char type:   Charset which combine to charcaters at a time 
//              may need more than 8 bits. So more datasets..
//  ______________ _____________________________________ 
// |    type      |   memory                            |
// |--------------|-------------------------------------|
// |    char      |   8  bits                           |
// |    char16_t  |   16 bits                           |
// |    char32_t  |   32 bits                           |
// |    wchar_t   |   represents largest character set  |
// |____________________________________________________|
//
// -------------------  Section 7  ----------------------------
//
//  Int types
//  ___________________________ ________________________
// |    type                   |   memory               |
// |---------------------------|------------------------|
// |      signed short int     |        16 bits         |
// |        signed int         |        16 bits         |
// |      signed long int      |        32 bits         |
// |    signed long long int   |        64 bits         |
// |____________________________________________________|
//
//
// -------------------  Section 8  ----------------------------
//
//  Floating point type
//
//  used to represent non integer numbers
//  represented by mantissa nd exponent
//  precision is number in the mantissa
//  precision is compiler dependant
//
//  __________________ _________________________________ 
// |    type          |   memory                        |
// |------------------|---------------------------------|
// |    float         |   7  digits                     |
// |    double        |   15 digitsn                    |
// |    long dounble  |   19 digits                     |
// |____________________________________________________|
//
//
// -------------------  Section 9  ----------------------------
//
//  bool true/false
//
//
//----------------------- Section 10 ---------------------------
// 
// sizeof operator returns the size of the datatype or the 
// variable.
//----------------------- Section 10 ---------------------------
//
// constant to fix a value of a variable.
//
//--------------------------------------------------------------

#include <iostream>
using namespace std;
int main(){

    // 
    // -------------------  Section 1 -> 4 ----------------------
    //     
    // cout<<"We are finding area of square"<<endl;
    // int side = 10;
    // int area = side * side;
    // cout<<"Area of square with side 10 is "<<area<<endl;
    //
    // -------------------  Section 5 -> 6 ----------------------
    //
    // char middle_name = {'A'};
    // cout<<"My middle name initial is "<<middle_name<<endl;
    //
    // ----------------------  Section 7 -------------------------
    //
    // unsigned short int exam_marks = {85};
    // cout<<"I scored "<<exam_marks<<"% in my exam"<<endl;
    //
    // long people_on_earth = 7600000000;
    // cout<<"There are "<<people_on_earth<<" people on earth"<<endl;
    //
    //
    // ----------------------  Section 8 -------------------------
    //
    // float my_score_percernt = 84.97;
    // cout<<"I scored "<<my_score_percernt<<"% in my exam"<<endl;
    //
    // double pi = 3.14159;
    // cout<<"Pi is "<<pi<<endl;
    //
    // ----------------------  Section 8 -------------------------
    //
    // float my_score_percernt = 84.97;
    // cout<<"I scored "<<my_score_percernt<<"% in my exam"<<endl;
    //
    // double pi = 3.14159;
    // cout<<"Pi is "<<pi<<endl;
    


    return 0;
}


