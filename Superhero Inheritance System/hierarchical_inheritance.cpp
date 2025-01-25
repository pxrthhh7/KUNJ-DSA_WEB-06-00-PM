#include <iostream> 
using namespace std;

class superhero
{
    public:

    void fly()
    {
        cout << "I can Fly" << endl;
    }
};


class Ironman : public superhero
{
    public:

    void laser()
    {
        cout << "I have Laser" << endl;
    }
};
class superman : public superhero
{
    public:

    void x_ray_vision()
    {
       cout << "I can see through solid objects, including walls." << endl;
    }
};
class batman : public superhero
{
    public:

    void Enhanced_strength()
    {
        cout << "I have enhanced strength" << endl;
    }
};


int main()
{   
    Ironman obji;
    superman objs;
    batman objb;

    obji.laser();
    objs.x_ray_vision();
    objb.Enhanced_strength();
}