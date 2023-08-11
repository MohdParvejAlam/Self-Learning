#include<iostream>
using namespace std;

class Reactangle{
    private:
    int length;
    int breadth;
    public:
    Reactangle(int lenght,int breadth){
        this->length=lenght;
        this->breadth=breadth;
    }

    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Reactangle r1(10,8);
    cout<<"Area is "<<r1.area();
}