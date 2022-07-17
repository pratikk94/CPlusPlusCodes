#include<iostream>
using namespace std;

// Compound data structre.
// Same element data type.
// Stored contiguously in an array.
// Individual elements can be accessed by their position.
// name of array is location of the array.

int main(){

    int temp_of_week[][5] = {{10,11,12,3,49},{20,21,24,25,27},{30,31,32,34,39},{40,41,42,44,49}};
    cout<<"Temperature on third day was "<<temp_of_week[3][2]<<endl;
    
    // cout<<"Name of the array is "<<temp_of_week<<endl;
    
    return 0;
}