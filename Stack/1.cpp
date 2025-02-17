#include <iostream>
using namespace std;

class stack
{
private:
    int top;
    int box[5];

public:
    stack()
    {
        top = -1;
        for (int i = 0; i < 5; i++)
        {
            box[i] = 0;
        }
    }

    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    bool isFull()
    {
        if (top == 4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is OverFlow" << endl;
        }
        else
        {
            top++;
            box[top] = val;
            cout << "Value Pushed Successfully" << endl;
        }
    }

    int pop(int value)
    {
        if (isEmpty())
        {
            cout << "Stack is UnderFlow" << endl;
            return 0;
        }
        else
        {
            int popValue = box[top];
            box[top] = 0;
            top--;
            cout << "Value Poped Successfully" << endl;
            return popValue;
        }
    }

    void peek()
    {
        int peekval = box[top];

        cout << "Peeked Value is : " << peekval << endl;
        
    }

    void display()
    {
        cout << "Element Of Stack : ";

        for (int i = 0; i < 5; i++)
        {
            cout << box[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    int user, value;
    stack obj1;

    do
    {
        cout << "-----------------------------------" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Push" << endl;
        cout << "2. Pop" << endl;
        cout << "3. Peek" << endl;
        cout << "4. Display Elements" << endl;
        cin >> user;
        cout << "-----------------------------------" << endl;

        switch (user)
        {
        case 0:
            cout << "Enter a Value You Want to be Push : ";
            cin >> value;

            obj1.push(value);
            break;

        case 1:
            cout << "Enter a Value You Want to be Push : ";
            cin >> value;

            obj1.push(value);
            break;

        case 2:
            obj1.pop(value);
            break;

        case 3:
            obj1.peek();
            break;

        case 4:
            obj1.display();
            break;

        default:
            cout << "Invalid Input !" << endl;
            cout << "Please Enter a Number Between 0 to 4 " << endl;
            break;
        }

    } while (user != 0);
}