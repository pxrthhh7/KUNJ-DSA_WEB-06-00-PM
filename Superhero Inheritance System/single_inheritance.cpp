#include <iostream>
using namespace std;

class superhero {

    public:

        void flying()
        {
            cout << "Ironman Flying...." << endl;
        }

        void saveTheWorld()
        {
            cout << "Ironman Save The World" << endl;
        }
};

class ironman : public superhero
{
    void shootingLasers()
    {
        cout << "shooting Lassers" << endl;
    }
};

int main()
{
    ironman obj1;

    obj1.flying();
    obj1.saveTheWorld();
}

