#include <iostream>
using namespace std;


class math
{
    public:
        int add(int a,int b,int c)
        {
            return a+b+c;
        }

        double add(double a,double b,double c,double d)
        {
            return a+b+c+d;
        }
};

int main()
{
    math obj;

    cout << obj.add(5,5,5,5) << endl;
    cout << obj.add(5,5,5) << endl;
}