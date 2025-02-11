#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
};

class crud
{
public:
    int value;
    Node *head;

public:
    void create(int value)
    {
        cout << "crud 1" << endl;
        this->value = value;

        Node *newnode = new Node();
        newnode->data = value;
        newnode->next = NULL;

        if (head == NULL)
        {
            head = newnode;
        }
        else
        {
            Node *temp = head;

            while (temp->next != NULL)
            {
                temp = temp->next;
            }
            temp->next = newnode;
        }
        cout << "Inserted : " << value << endl;
    }
    void read()
    {
        cout << "crud 2" << endl;

        // while (head != NULL) {

            cout << head->data << " ";
    
            head = head->next;
        // }
        cout << endl;
    }
    void insert()
    {
        cout << "crud 3" << endl;
    }
    void remove()
    {
        cout << "crud 4" << endl;
    }
};

int main()
{
    int user, value;

    crud obj1;

    do
    {
        cout << "0. Exit" << endl;
        cout << "1. Create" << endl;
        cout << "2. Read" << endl;
        cout << "3. Insert" << endl;
        cout << "4. Remove" << endl;
        cin >> user;
        
        switch (user)
        {
        case 0:
            cout << "Exit Successfully..." << endl;
            break;

        case 1:
            cout << "Enter a Value You Want To Be Insert : ";
            cin >> value;
            obj1.create(value);
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
            cout << "Invalid Input..." << endl;
            cout << "Please Enter a Value between 0 to 4" << endl;
            break;
        }

    } while (user != 0);
}