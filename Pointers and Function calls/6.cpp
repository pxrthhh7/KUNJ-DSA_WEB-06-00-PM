#include <iostream>
using namespace std;


int main()
{
    int num = 5;
    int &ref = num;

    cout << "Number : " << num << endl;
    cout << "Reference : " << ref << endl;

    ref = 10;

    cout << "Reference : " << ref << endl; 
    cout << "Number : " << num << endl;
}