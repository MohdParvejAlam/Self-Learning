
#include<iostream>
using namespace std;

class Base{
    public:
    virtual void fun1()=0;//pure virtual function
    virtual void fun2()=0;//pure virtual function and you must be define it in derived class

};

class Derived : public Base{
    public:
    void fun1(){
        cout<<"Display of fun1"<<endl;
    }
    void fun2(){
        cout<<"Display of fun2"<<endl;
    }
};

int main(){
    Derived d;
    d.fun1();
    d.fun2();
}

//prototype of function must be same like void display();
//If a class is contains a concrete funtion and virtual function then the class is cllaed the abstract class
//If a class is contains only pure virtual funtion then the abstract class is colled interface