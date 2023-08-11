#include <iostream>
using namespace std;

class Reactangle
{
public:
    int length;
    int breadth;

public:
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

// Reactangle::Reactangle(/* args */)
// {
// }

// Reactangle::~Reactangle()
// {
// }

int main()
{
    Reactangle R1;
    // R1.length=10;
    // R1.breadth=5;
    // cout<<"area of triangle is "<<R1.area()<<endl;
    // cout<<"perimeter of triangle is "<<R1.perimeter()<<endl;

    // pointer using stack
    //  Reactangle *P;
    //  P=&R1;
    //  P->length=20;
    //  P->breadth=10;
    //  cout<<"Area is "<<P->area()<<endl;
    //  cout<<"Perimeter is "<<P->perimeter()<<endl;

    // pointer using heap
    // Reactangle *P = new Reactangle();
    // P->length = 20;
    // P->breadth = 10;
    // cout << "Area is " << P->area() << endl;
    // cout << "Perimeter is " << P->perimeter() << endl;
}
