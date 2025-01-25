#include <iostream>
using namespace std;

class superhero
{
    private:
        int power;

    public :

    void batman(int power)
    {
        this -> power = power;
        grad();
    }
    void superman(int power)
    {
        this -> power = power;
        grad();
    }
    void ironman(int power)
    {
        this -> power = power;
        grad();
    }
    void spiderman(int power)
    {
        this -> power = power;
        grad();
    }
    
    void grad()
    {
        if (power >= 100)
        {
            cout << "A1 - Top Hero !" << endl;
        }
        else if (power >= 75 && power <= 99)
        {
            cout << "A2 - Very Good !" << endl;
        }
        else if (power >= 50 && power <= 74)
        {
            cout << "B - Average Hero !" << endl;
        }
        else
        {
            cout << "C - Needs Improvement" << endl;
        }
    }

};

int main ()
{
    
    superhero objs;

    objs.batman(100);
    objs.superman(85);
    objs.ironman(65);
    objs.spiderman(40);
}


 