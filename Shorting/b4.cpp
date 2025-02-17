#include <iostream>
using namespace std;

int main()
{
    int size;

    cout << "Enter The Size of an Array : ";
    cin >> size;

    int box[size];

    for (int i = 0; i < size; i++)
    {
        cout << "Box [" << i << "] = ";
        cin >> box[i];
    }

    cout << "Element of an Array is : ";

    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }

    cout << endl;

    cout << "---------- After Shorting ----------" << endl;

    for (int i = 0; i < size-1; i++)
    {                                   
        for (int j = 0; j < size-1; j++)
        {                             
            if (box[j] < box[j + 1]) 
            {
                int temp = box[j];
                box[j] = box[j+1];
                box[j + 1] = temp;
            }
            
        }
        
    }
    
    cout << "Element of an Array is : " ;
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    } 
    
}