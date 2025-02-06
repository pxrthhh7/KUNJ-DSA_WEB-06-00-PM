#include <iostream>
using namespace std;

class user
{
    int size;
    int arr[size];

public:
    void create(int size)
    {
        this->size = size;
    }
    void read()
    {
    }
    void insert()
    {
    }
    void remove()
    {
    }
};

int main()
{
    int input, size;
    user obj1;

    do
    {
        cout << "0. For Exit" << endl;
        cout << "1. For Create" << endl;
        cout << "2. For Read" << endl;
        cout << "3. For Insert" << endl;
        cout << "4. For Remove" << endl;
        cin >> input;

        switch (input)
        {

        case 0:
            cout << "Exit Successfully..." << endl;
            break;
        case 1:
            cout << "Enter the Size of an Array : ";
            cin >> size;

            obj1.create(size);
            break;
        case 2:
            obj1.read();
            break;
        case 3:
            obj1.insert();
            break;
        case 4:
            obj1.remove();
            break;

        default:
            cout << "Invalid Input !" << endl;
            break;
        }

    } while (input != 0);
}