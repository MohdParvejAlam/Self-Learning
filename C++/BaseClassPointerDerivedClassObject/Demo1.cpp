#include<iostream>
using namespace std;

class Base{
    public:
    void fun1(){
        cout<<"Fun1 of base "<<endl;
    }
};

class Derived : public Base{
    public:
    void fun2(){
        cout<<"Fun 2 of derived"<<endl;
    }
};

int main(){
    // Base *p;
    // p = new Derived();
    Derived d;
    Base *p = &d;
    p->fun1();
    //p->fun2();
    return 0;
}