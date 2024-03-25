#include<iostream>
using namespace std;
// template<class S>
// void sum(S a,S b){
//    std::cout<< "result: " << a+b;
// }
// template<class T>
// void show(T a,T b){
//     std::cout<< "A=" << a <<" B = "<< b << std::endl;
// }
// int main(){
//     //int p=10,q=20;
//     char a='a',b='b';
//     sum(12.4,12.4);
//     std::cout<<std::endl;
//     show(a,b);
//     return 0;
// }
template<typename T>
T myMax(T a,T b){
    return (a>b)?a:b;
}
int main(){
    cout<< myMax<int>(10,20)<<endl;
    cout<< myMax<float>(10.2,20.5)<<endl;
    cout<< myMax<char>('a','s')<<endl;
}
