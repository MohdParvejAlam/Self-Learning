#include<iostream>
using namespace std;

class Parent{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    void funParent(){
        a=10;
        b=6;
        c=8;
    }
};

class Child : private Parent{
    public:
    void funChild(){
        //a=7;
        b=6;
        c=9;
    }
};

class GrandChild : public Child{
    public: 
    void funGrandChild(){
        //a=2;
        // b=4;
        // c=1;
    }
};

int main(){
    Child c;
    // c.a=6;
    // c.b=5;
    // c.c=9
}