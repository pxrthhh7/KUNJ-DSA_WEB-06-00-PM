#include <iostream>
using namespace std;


void sumofbox(int *p[],int arr[], int size)
{
    int sum = 0;

    cout << "The Value is : ";
    for (int i = 0; i < size; i++)
    {
        p[i] = &arr[i];
        cout << *p[i] << " ";
        sum += *p[i];
    }
    cout << endl;
    cout << "The sum of an array : " << sum;
}

int main()
{
    int size;

    cout << "Enter the Size : ";
    cin >> size;

    int box[size];
    int *ptr[size];

    for (int i = 0; i < size; i++)
    {
        cout << "box[" << i << "] = ";
        cin >> box[i];
    }
    
    sumofbox(ptr,box,size);
}