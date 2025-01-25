#include <iostream>
using namespace std;

class superhero
{
    public : 

    void fly()
    {
        cout << "I can fly !" << endl;
    }
};

class Ironman : public superhero
{
    public :

    void laser()
    {
        cout << "I have Laser" << endl;
    }
};
class superman : public superhero
{
    public :

    void x_ray_vision()
    {
       cout << "I can see through solid objects, including walls." << endl;
    }
};

class bothaccess : public superman , public Ironman
{
    public :

    void bothfly()
    {
        cout << "both can fly !" << endl;
    }
};

int main()
{
    bothaccess objba;

    objba.Ironman::fly();
}