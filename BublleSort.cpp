#include<iostream>
using namespace std;

void printArray(int arr[],int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){

    
    cout<<"enter array size           : ";
    int size;
    cin>>size;
    int arr[size];
    cout<<"enter array element: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"the array before sorting: ";
    printArray(arr,size);

    //Ascending sort
    for(int i=1; i<size; i++){
        int flag=0;
        //cout<<"Iteration no: "<<i<<endl;
        for(int j=0; j<size-i; j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
                flag=1;
            }
            //printArray(arr,size);
        }
        cout<<endl;
        if(flag==0) break;
    }

    cout<<"the array after Ascending sorting: ";
    printArray(arr,size);

    

}