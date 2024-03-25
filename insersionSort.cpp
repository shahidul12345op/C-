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

    cout<<"the array before insersion sorting: ";
    printArray(arr,size);
    cout<<endl;

    //insersion sort progress
    for(int i=1; i<size; i++){
        int key=arr[i];
        int j=i-1;
        cout<<"i: " << i << " key: " << key << endl;
        while(arr[j]>key && j>=0){
            arr[j+1]=arr[j];
            printArray(arr,size);
            j--;
        }
        arr[j+1]=key;
        printArray(arr,size);
    }


    cout<<"the array after insersion sorting: ";
    printArray(arr,size);
    cout<<endl;

    

}