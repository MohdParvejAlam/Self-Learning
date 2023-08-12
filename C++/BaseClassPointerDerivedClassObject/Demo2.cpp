#include<iostream>
using namespace std;

class Reactangle{
    public:
    void area(){
        cout<<"area of base "<<endl;
    }
};

class Cuboid : public Reactangle{
    public:
    void volume(){
        cout<<"volume of derived"<<endl;
    }
};

int main(){
    Cuboid c;
    Reactangle R;
    // c.area();
    // c.volume();
    Reactangle *r = &c;
    r->area();
    //Cuboid *C = &R; totally wrong 
    return 0;
}