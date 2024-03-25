#include<iostream>
using namespace std;
void printArray(int arr[], int size){
    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }
    cout<<"before sort :"<<endl;
    printArray(arr,size);
    //step one finding max
    int max=INT_MIN;
    for( int i=0; i<size; i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    //step2 initialization of count array
    int count[max+1];
    for(int i=0; i<=max; i++){
        count[i]=0;
    }

    //frequency calculation
    for(int i=0; i<size; i++){
        count[arr[i]]++;
    }
    cout<<"frequency: ";
    printArray(count,max+1);

    //step four cumulative sum

    for(int i=1; i<=max; i++){
        count[i]+=count[i-1];
    }
     cout<<"cumulative sum: ";
    printArray(count,max+1);

    //step five final array -->backword traversal
    int final[size];
    for( int i=size-1; i>=0; i--){
        count[arr[i]]--;
        int k=count[arr[i]];
        final[k]=arr[i];
    }
    cout<<"after sort :"<<endl;
    printArray(final,size);
}
// #include<iostream>
// using namespace std;

// void printArray(int arr[], int size) {
//     for (int i = 0; i < size; i++) {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// int main() {
//     int size;
//     cin >> size;
//     int arr[size];
//     for (int i = 0; i < size; i++) {
//         cin >> arr[i];
//     }

//     cout << "before sort :" << endl;
//     printArray(arr, size);

//     int max = INT_MIN;
//     for (int i = 0; i < size; i++) {
//         if (arr[i] > max) {
//             max = arr[i];
//         }
//     }

//     int count[max + 1];
//     for (int i = 0; i <= max; i++) {
//         count[i] = 0;
//     }

//     for (int i = 0; i < size; i++) {
//         count[arr[i]]++;
//     }

//     cout << "frequency: ";
//     printArray(count, max + 1);

//     count[0] = 0;
//     for (int i = 1; i <= max; i++) {
//         count[i] += count[i - 1];
//     }

//     cout << "cumulative sum: ";
//     printArray(count, max + 1);

//     int final[size];
//     for (int i = size - 1; i >= 0; i--) {
//         int k = count[arr[i]] - 1;
//         final[k] = arr[i];
//         count[arr[i]]--;
//     }

//     cout << "after sort :" << endl;
//     printArray(final, size);
// }
