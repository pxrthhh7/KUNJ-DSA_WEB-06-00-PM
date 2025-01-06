#include <iostream>
using namespace std;

class gadget
{

private:
    int count = 0;

public:
    string name;
    int powerlevel;

    void display(string gn, int pl)
    {
        name = gn;
        powerlevel = pl;

        cout << "Gadget Name : " << name << endl;
        cout << "Power Level : " << powerlevel << endl;
        cout << "----------------------------------------" << endl;
    }

    void update()
    {
        count ++;
        if (count > 10)
        {
            cout << "You are Overusing Gadget !" << endl;
        }
        
    }
};

int main()
{
    int time;
    string gadgetn;
    gadget nobita, doraemon;

    cout << "Doraemon's Gadget's" << endl;
    cout << "----------------------------------------" << endl;

    nobita.display("Time Machine", 90);
    nobita.display("Memory Bread", 75);
    nobita.display("Take Copter", 84);
    nobita.display("AnyWhere Door", 95);
    nobita.display("Dress Up Camera", 60);

    cout << "Which Gadget's Do You Want To Use : ";
    cin >> gadgetn;
    cout << "How Many Times Do You Want to Use this Gadgets : ";
    cin >> time;


    for (int i = 1; i <= time; i++)
    {
        cout << "You are using gadget for " << i << " Time" <<endl;

        doraemon.update();
    }
}