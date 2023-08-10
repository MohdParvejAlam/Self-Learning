#include <iostream>
using namespace std;

int main()
{
    // Array in stack
    int a[5] = {4, 8, 7, 6, 5};

    // Array in heap
    int *p;
    p = new int[5];
    p[0] = 6;
    p[1] = 9;
    p[2] = 4;
    p[3] = 7;
    p[4] = 5;

    // delete []p;  memory leak problem

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }
    cout << "Next" << endl;
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
}