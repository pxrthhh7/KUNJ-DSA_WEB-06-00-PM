#include <iostream>
using namespace std;

class superhero
{
    public:

    void fly()
    {
        cout << "I can fly !" << endl;
    }
};

class BruceWayne : public superhero
{
    public:

    void laser()
    {
        cout << "I have Laser" << endl;
    }  
};
class batman : public BruceWayne
{
    public:

    void Enhanced_strength()
    {
        cout << "I have enhanced strength" << endl;
    }
};

int main()
{
    BruceWayne obj1;
    batman obj2;

    obj2.laser();
    obj2.Enhanced_strength();
}