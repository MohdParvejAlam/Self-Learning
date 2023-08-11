#include<iostream>
using namespace std;

class Base{
    public:
    Base(){
        cout<<"Non param of Base "<<endl;
    }
    Base(int x){
        cout<<"Param of Base "<<x<<endl;
    }
};

class Derived : public Base{
    public:
    Derived(){
        cout<<"Non param of derived "<<endl;
    }
    Derived(int y){
        cout<<"Param of deriverd "<<y<<endl;
    }
    Derived(int x,int y):Base(x){
        cout<<"Param of derirved "<<y<<endl;
    }
};

int main(){
    Derived d(3,8);
}