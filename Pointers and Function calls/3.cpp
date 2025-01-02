#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int *p1 = &a;
    int **p2 = &p1;
    int ***p3 = &p2;
    int ****p4 = &p3;
    int *****p5 = &p4;

    cout << *****p5 << endl;

    *****p5 = 10;

    cout << "After Changing the value is : " << a << endl; 
}