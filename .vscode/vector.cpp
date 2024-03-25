#include<iostream>
#include<vector>
using std::vector;
using namespace std;
int main(){
    vector<int> myVec;
    myVec={1,2,3,4,5,6,7,8};
    for(auto i:myVec){
        cout<< i << " ";
    }
    cout<<endl;
}