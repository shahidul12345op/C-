#include<iostream>
using namespace std;

int binarySearch(int arr[],int x,int lb,int ub){
    if(lb<=ub){
        int mid=(lb+ub)/2;
        if(arr[mid]==x){                            
            return mid;
        }
        else if(x>arr[mid]){                        
            return binarySearch(arr,x,mid+1,ub);
        }
        else{                                       
            return binarySearch(arr,x,lb,mid-1);
        }
    }
    else return -1;

}
int main(){
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int cheakValue;
    cout<<"ehter the number you want to cheak"<<endl;
    cin>>cheakValue;

    int IndexNo=binarySearch(arr,cheakValue,0,size-1);
    if(IndexNo!=-1){
        cout<<"index no: "<<IndexNo<<" and "<<"position: "<<IndexNo+1<<endl;
    }
    else{
        cout<<"no value found";
    }
    return 0;

}