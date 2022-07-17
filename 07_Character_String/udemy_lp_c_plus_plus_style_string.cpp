// # include<string>
// 1. std namesapce
// 2. contiguous in memory
// 3. dynamic size
// 4. works with i/p and o/p streams
// 5. lots of useful member functions
// 6. can be converted to c type strings
//    easily
// 7. Safer


// methods
// 1. substr(start_index,length)
// 2. find(to find) returns index of substring
// 3. erase(start_index,length) and clear(clears everything)
// 4. length()


// input 
// getline(cin,"String",delimiter)

#include<iostream>
#include<string.h>

using namespace std;

int main(){

    string s1 = {};
    cout<<"String one is "<<s1<<endl;

    string s2 = {"Pratik"};
    cout<<"String one is "<<s2<<endl;

    string s3 = {s2};
    cout<<"String one is "<<s3<<endl;

    string s4 = {s3,0,2};
    cout<<"String one is "<<s4<<endl;

    // constructor called 
    string s5 (3,'p');
    cout<<"String one is "<<s5<<endl;

    string ip;
    // stops at new line
    getline(cin,ip);
    cout<<ip<<endl;
    // stops on encoutering 'k'
    getline(cin,ip,'k');
    cout<<ip<<endl;




    return 0;
}