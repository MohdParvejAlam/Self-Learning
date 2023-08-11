#include<iostream>
using namespace std;

class  Complex
{
public:
    int real;
    int img;
public:
     Complex(int r=0,int i=0){
        real =r;
        img=i;
     }
    Complex operator+(Complex x){
     Complex temp;
     temp.real=real+x.real;
     temp.img=img+x.img;

     return temp;
    }
};

int main(){
    Complex c1(3,4);
    Complex c2(4,5);
    Complex c3;
    //c3=c1.add(c2);
    c3=c1+c2;
    cout<<"Addition of two imaginary number is "<<c3.real<<" +i " <<c3.img;

}

