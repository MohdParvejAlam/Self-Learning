#include <iostream>
using namespace std;

class Reactangle
{
private:
    int length;
    int breadth;

public:
    //Non parameterized constructor
    // Reactangle(){
    //     length=1;
    //     breadth=1;
    // }
   
   // parameterized constructor
    Reactangle (int l=0,int b=0){
        setLenght(l);
        setBreadth(b);
    }

    //Copy constructor
    Reactangle (Reactangle &rect){
        length=rect.length;
        breadth=rect.breadth;
    }

    //setter or mutators function
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

    //getter or accessors function
    int getLength(){
        return length;
    }
    int getBreadth(){
        return breadth;
    }

    //Facilator function
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
    Reactangle r2(r1);
    //r1.length=10;
    // r1.setLenght(-10);
    // r1.setBreadth(5);
    cout<<"Length is "<<r2.getLength()<<endl;
    cout<<"Breadth is "<<r2.getBreadth()<<endl;
    cout<<"Area is "<<r2.area()<<endl;
    cout<<"perimeter is "<<r2.perimeter();
}