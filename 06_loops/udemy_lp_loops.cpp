// for loops

// range based for loops

// continue and break

#include<iostream>
#include<vector>

using namespace std;

int main(){

    // vector<int> v = {10,2,3,5,109};

    // for(int i=0;i<v.size();i++){
    //     cout<<v.at(i)<<endl;
    // }

    // int scores[] = {1,2,3,4,5,67,8,11}; 


    // compilers figures of type of collection in this 
    // case array
    
    // for (auto score : scores){
    //     cout<<score<<endl;
    // }

    // vector<int> v = {10,2,3,5,100};
    // double avg{};
    // int total{};
    // for(auto el : v){
    //     total = total + el;
    // }
    // int no_el = v.size();
    // avg = total/no_el;

    // cout<<"Average is "<<avg<<endl;


    while(true){

        char c;
        cout<<"Continue in loop?"<<endl;
        cin >>c;

        if(c=='Y')
            continue;
        else if(c=='N')
            cout<<"N?"<<endl;     
        else
            break;


    }



    return 0;
}