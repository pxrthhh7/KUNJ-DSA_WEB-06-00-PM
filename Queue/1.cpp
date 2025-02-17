#include <iostream>
using namespace std;


class queue
{
    private:
        int front,rear;
        int box[5];
    public:

        queue()
        {
            front = -1;
            rear = -1;

            for (int i = 0; i < 5; i++)
            {
                box[i] = 0;
            }
            
        }
        bool isEmpty()
        {
            if (front == -1 && rear == -1)
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
            if (rear == sizeof(box)-1)
            {
                return true;
            }
            else
            {
                return false; 
            }
        }

        void enqueue(int value)
        {
            if (isFull())
            {
                cout << "Queue is Full !" << endl;
            }
            else if (isEmpty())
            {
                front = 0;
                rear = 0;
                box[rear]=value;
            }
            else
            {
                rear++;
                box[rear] = value;
            }
            
        }

        int dequeue()
        {
            if (isEmpty())
            {
                cout << "Queue is Empty !" << endl;
                return 0;
            }
            else if (front == rear)
            {
                int temp = box[front];
                box[front] = 0;
                rear = -1;
                front = -1;
                return temp;  
            }
            else
            {
                int temp = box[front];
                box[front] = 0;
                front++;
                return temp; 
            }  
        }

        void Empty()
        {
            if (isEmpty())
            {
                cout << "Queue is Empty !" << endl;
            }
            else
            {
                cout << "Queue is NotEmpty , Elements are Available !" << endl;
            }
        }

        void Full()
        {
            if (isFull())
            {
                cout << "Queue is Full !" << endl;
            }  
            else
            {
                cout << "Queue is NotFull , Space are Available !" << endl;
            }
        }

        void display()
        {   
            cout << "Element of Queue : ";

            for (int i = 0; i < 5; i++)
            {
                cout << box[i] << " ";
            }
        }
};


int main()
{
    int user,value;
    queue obj1;

    do
    {
        cout << "-----------------------------------" << endl;
        cout << "0. Exit" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Is Empty ?" << endl;
        cout << "4. Is Full ?" << endl;
        cout << "5. Display Elements" << endl;
        cin >> user;
        cout << "-----------------------------------" << endl;

        switch (user)
        {
        case 0:
            cout << "You Are Successfully Exited !";
            break;

        case 1:
            cout << "Enter a Value You Want to be Add : ";
            cin >> value;

            obj1.enqueue(value);
            break;

        case 2:
            cout << obj1.dequeue() << " Removed Successfully !";
            cout << endl;
            break;

        case 3:
            obj1.Empty();
            break;
        
        case 4:
            obj1.Full();
            break;

        case 5:
            obj1.display();
            cout << endl;
            break;

        default:
            cout << "Invalid Input !" << endl;
            cout << "Please Enter a Number Between 0 to 5 " << endl;
            break;
        }

    } while (user != 0);
}