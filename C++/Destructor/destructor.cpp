#include<iostream>
using namespace std;
 
class Demo{
    int *p;
    public:
    Demo(){
        p= new int[10];
        cout<<"Constructor of demo"<<endl;
    }
    ~Demo(){
        delete []p;
        cout<<"Destructor of demo"<<endl;
    }
}; 

void fun(){
    //Demo d;

    Demo *p = new Demo();
    delete p;
}

int main(){
    fun();
}