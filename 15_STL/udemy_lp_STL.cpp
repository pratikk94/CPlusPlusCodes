#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<int> v{15,2,100};
    sort(v.begin(),v.end());

    for(auto el :v){
        cout<<el<<endl;
    }



    return 0;
}