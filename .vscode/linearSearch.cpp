#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    char c;
    cout << "Do you want to search: Y/N"<<endl;
    cin >> c;
    while (toupper(c) == 'Y')
    {
        int searchValue;
        cout << "enter the value you want to search: ";
        cin >> searchValue;
        int flag = 0;
        for (int i = 0; i < size; i++)
        {
            if (arr[i] == searchValue)
            {
                flag = 1;
                cout << "index: " << i << " and "
                     << "position: " << i + 1 << endl;
            }
        }
        if (flag == 0)
        {
            cout << "INDEX NOT FOUND"<<endl;
        }
        cout << "Do you want to continue: Y/N"<<endl;
        cin >> c;
    }

    return 0;
}
