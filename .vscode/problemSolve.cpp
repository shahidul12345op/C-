#include <iostream>
using namespace std;
void swap(int *a, int *b){
    *a = *a+*b;
    *b = *a-*b;
    *a = *a-*b;
}
void display_array(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void selection_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int smallest_index = i;
        cout << "iteration : " << i << endl;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[smallest_index] > arr[j])
            {
                smallest_index = j;
            }
        }
        if (smallest_index != i)
        {
            swap(&arr[i], &arr[smallest_index]);
        }
        display_array(arr,n);
    }
    
}

int binarySearch(int arr[],int n,int target){
    int lb=0; 
    int ub=n-1;
    while(lb<=ub){
        int mid=(lb+ub)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            ub=mid-1;
        }
        else{
            lb=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cout << "enter the size: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    selection_sort(arr,n);
    int target;
    cout<<"enter the value you want to search: ";
    cin>>target;
    int index=binarySearch(arr,n,target);
    if(index!=-1){
        cout<<"index no:"<< index << " " << "position no: "<< index+1 << endl;
    }

    return 0;
}