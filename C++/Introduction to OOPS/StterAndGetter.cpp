#include <iostream>
using namespace std;

class Reactangle
{
private:
    int length;
    int breadth;

public:
    void setLenght(int l){
        if(l>0)
        length=l;
        else
        length=1;
    }
    void setBreadth(int b){
        if(b>0)
        breadth=b;
        else
        breadth=1;
    }
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main(){
    Reactangle r1;
    //r1.length=10;
    r1.setLenght(-10);
    r1.setBreadth(5);
    cout<<"Length is "<<r1.getLength()<<endl;
    cout<<"Breadth is "<<r1.getBreadth()<<endl;
    cout<<"Area is "<<r1.area()<<endl;
    cout<<"perimeter is "<<r1.perimeter();
}