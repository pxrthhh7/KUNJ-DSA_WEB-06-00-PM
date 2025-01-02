#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter the size : ";
    cin >> size;

    int arr[size];
    int *ptr[size];


    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = ";
        cin >> arr[i];
        ptr[i] = &arr[i];
    }

    cout << "------------------------------" << endl;

    for (int i = 0; i < size; i++)
    {
        cout << *ptr[i] << endl;
    }
}