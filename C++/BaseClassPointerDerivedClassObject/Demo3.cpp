#include<iostream>
using namespace std;

class BasicCar{
    public:
    void start(){
        cout<<"Car started "<<endl;
    }
};

class AdvancedCar : public BasicCar{
    public:
    void playMusic(){
        cout<<"Music palyed"<<endl;
    }
};

int main(){
    AdvancedCar ac;
    // ac.start();
    // ac.playMusic();
    // BasicCar *bc = &ac;
    BasicCar *bc;
    bc = new AdvancedCar();
    bc->start();
    return 0;
}