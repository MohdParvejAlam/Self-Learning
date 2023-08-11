#include<iostream>
using namespace std;

class  Complex
{
private:
    int real;
    int img;
public:
     Complex(int r=0,int i=0){
        real =r;
        img=i;
     }
     void Display(){
        cout<<real<<"+i"<<img;
     }
    friend Complex operator+(Complex x, Complex y);
};

Complex operator+(Complex x, Complex y){
    Complex t;
    t.real = x.real+y.real;
    t.img = x.img+y.img;
    return t;
}

int main(){
    Complex c1(3,4);
    Complex c2(4,5);
    Complex c3;
    //c3=c1.add(c2);.
    //c3=operator+(c1,c2);
    c3=c1+c2;
    c3.Display();

}

