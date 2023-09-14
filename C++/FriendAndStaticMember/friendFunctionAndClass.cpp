#include<iostream>
using namespace std;

class other;

class test{
    private:
    int a;
    protected:
    int b;
    public:
    int c;
    friend void fun();
    friend other;
};

class other{
    public:
    test t;
    void fun1(){
    t.a=8;

    t.b=4;
    t.c=2;
    }
};

void fun(){
    test t;
    t.a=3;
    t.b=5;
    t.c=9;
    cout<<t.a;
}

int main(){
    test T;
    fun();
}