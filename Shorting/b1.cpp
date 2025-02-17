#include <iostream>
using namespace std;

class shorting
{
public:
    void bubbleSort(int box[], int n)
    {
        for (int i = 0; i < n - 1; i++) // 80 70 50 10 90
        {
            for (int j = 0; j < n - 1; j++)
            {
                if (box[j] > box[j + 1])
                {
                    int temp = box[j];
                    box[j] = box[j + 1];
                    box[j + 1] = temp;
                }
            }
        }

        cout << "After Shorting Element of an Array is : ";
        for (int i = 0; i < n; i++)
        {
            cout << box[i] << " ";
        }
    }
};

int main()
{
    int box[] = {90, 80, 70, 50, 10};
    int size = sizeof(box) / sizeof(box[0]);

    cout << "Before Shorting Element of an Array is : ";
    for (int i = 0; i < size; i++)
    {
        cout << box[i] << " ";
    }
    cout << endl;

    shorting obj1;

    obj1.bubbleSort(box, size);
}