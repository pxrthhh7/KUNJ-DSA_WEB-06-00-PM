#include <iostream>
using namespace std;

class a
{
    public : 
        virtual void fun()
        {
            cout << "Fun" << endl;
        }
};

class b : public a
{
    public : 
        void fun()
        {
            cout << "Fun from child" << endl;
        }
};

int main()
{
    a *ptr;
    b objb;
    ptr=&objb;
    ptr->fun();
}