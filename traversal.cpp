#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    int arr[50];
    cout<<"enter array size: ";
    int size;
    cin>>size;
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    cout<<"the array is: ";
    printArray(arr,size);

    int pos,value;
    // cout<<"enter the position for insersion: ";
    cout<<"enter the position for the deletion: ";
    cin>>pos;
    // cout<<"enter the value for the insersion: ";
    // cout<<"enter the value for the deletion: ";
    // cin>>value;
     
    // Insersion---size but deletion --- size-1
    if(pos<0 || pos > size-1){
        cout<<"invalid position";
    }
    // else{
        // for(int i=size-1; i>=pos; i--){
        //     arr[i+1]=arr[i];
        // }
        // arr[pos]=value;
        //now we are applying time complexity if we use for loop we have continue this code O(n) time
        //but now we just continue it only 1 time
        // arr[size]=arr[pos];
        // arr[pos]=value;
    // }

    // cout<<"the array is: ";
    // printArray(arr,size+1);

    //delation
    else{
        if(pos==size-1) size--;
    else{
        for(int i=pos+1; i<size; i++){
            arr[i-1]=arr[i];
        }
        size--;
    }
    }
    cout<<"the array after delation is: ";
    printArray(arr,size);

}