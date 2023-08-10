#include <iostream>
using namespace std;
int main()
{
    int *p, *q;
    p = new int[5];
    p[0] = 6;
    p[1] = 9;
    p[2] = 4;
    p[3] = 7;
    p[4] = 5;
    q = new int[10];

    for (int i = 0; i < 5; i++)
    {
        q[i] = p[i];
    }

    delete[] p;
    p = q;
    q = NULL;

    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << endl;
    }
}
