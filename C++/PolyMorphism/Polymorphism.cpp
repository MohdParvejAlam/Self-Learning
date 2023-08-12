#include<iostream>
using namespace std;

class Car{
    public:
    virtual void started(){
        cout<<"Car of started "<<endl;
    }
};

class Innova : public Car{
    public:
    void started(){
        cout<<"Innova of Started"<<endl;
    }
};
class Swift : public Car{
    public:
    void started(){
        cout<<"Swift of Started"<<endl;
    }
};

int main(){
   Car *p = new Innova();
   p->started();
   p= new Swift();
   p->started();
}


//runtime polymorphism

