
#include<iostream>
using namespace std;
int binarySearch(int arr[],int x,int lb,int ub)(
    if(lb<=ub){
        int mid=(lb+ub)/2;
        if(x==arr[mid]) return mid;
        else if(x>arr[mid]){
            return binarySearch(arr,x,mid+1,ub);
        }
        else(
            return binarySearch(arr,x,lb,mid-1);
        )
    }
    else return -1;
)
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
    int indexno=binarySearch(arr,cheakValue,0,size-1);
    if(indexno!=-1){
        cout<<"index number is: "<<i;
    }

}