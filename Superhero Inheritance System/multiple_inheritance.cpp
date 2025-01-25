#include <iostream>
using namespace std;

class FlyingHero // Parent Class
{
    public:

    void fly()
    {
        cout << "I Can Fly High In The Sky !" << endl;
    }
};

class FightingHero // Parent Class
{
    public:

    void fight()
    {
        cout << "I Can Fight !" << endl;
    }
};



class Ironman : public FlyingHero , public FightingHero // Child Class
{
    public:

    void shootLaser()
    {
        cout << "Shooting Laser..." << endl;
    }
};

class Superman : public FlyingHero , public FightingHero // Child Class
{
    public:

    void heatvision()
    {
        cout << "It has heat vision !" << endl;
    }
};

int main()
{
    Ironman obji;
    Superman objs;

    obji.shootLaser();
    objs.heatvision();
}