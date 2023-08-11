#include<iostream>
using namespace std;

class Base{
    public:
    int x;
    void fun(){
        cout<<x<<endl;
    }
};

class Derived : public Base{
    public:
    int y;
    void display(){
        cout<<y<<""<<x<<endl;
    }
};

int main(){
    Derived d;
    Base b;
    d.x=10;
    d.y=47;
    //b.display();
    d.fun();
    d.display();
}