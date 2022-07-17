// To run the code : 
// g++ -std=c++11 udemy_lp_vectors.cpp


// Vectors are containers in c++ standard
// template library.

// Vector arrays that can grow and shrink in 
// size.

// Provides similar stmantics and sytax
// as arrays.

// Vector are very efficient

// Can provide bounds checking

// Can use lots of cool functions like
// sort reverse find and more.

// push back method add elements to vector

// [] vs .at(element_no) method 

// .size() method to show the no of elements
// in vector


#include<iostream>
#include<vector>

using namespace std;

int main(){
    // declaration and initializatio of vector
    vector<char> vowels{'a','e','i','o'};
    // add element to the end of the vector list
    vowels.push_back('u');
    cout<<vowels[4]<<endl;

    // unbound check
    // does not throw an exception.
    cout<<vowels[5]<<endl;

    // bound check throws an exception
    // cout<<vowels.at(5)<<endl;

    // 2d Vectors.
    vector<vector<int>> matrix {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    cout<<"5th element of array is "<<matrix.at(1).at(1)<<endl;



    return 0;
}
