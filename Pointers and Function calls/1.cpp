#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int *ptr = &a;

    cout << "Address : " << ptr << endl;
    cout << "Value : " << *ptr << endl; 

    cout << "---------- After Changing ----------" << endl;

    *ptr = 20;

    cout << "Address : " << ptr << endl;
    cout << "Value From Actual Veriable  : " << a << endl;
    cout << "Value Through the Pointer Veriable  : " << *ptr << endl;
}