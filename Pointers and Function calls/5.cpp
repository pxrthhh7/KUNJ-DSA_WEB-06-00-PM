#include <iostream>
using namespace std;

void valswap(int x,int y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;

}

void refswap(int &x,int &y)
{
    int temp;

    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int x,y;

    cout << "Enter The Value of X : ";
    cin >> x;
    cout << "Enter The Value of Y : ";
    cin >> y;

    cout << "Before Swapping : " << endl;
    cout << "x = " << x << "  and  " << "y = " << y << endl;

    valswap(x,y);
    cout << "After Swapping With call by value : " << endl;
    cout << "x = " << x << "  and  " << "y = " << y << endl;

    refswap(x,y);
    cout << "After Swapping With call by Reference : " << endl;
    cout << "x = " << x << "  and  " << "y = " << y << endl;
}