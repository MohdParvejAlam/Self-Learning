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
    //  void Display(){
    //     cout<<real<<"+i"<<img;
    //  }

    friend ostream & operator<<(ostream &out, Complex c);
};

ostream & operator<<(ostream &out, Complex c){
  out<<c.real<<"+i"<<c.img<<endl;
  return out;
}



int main(){
    Complex c(3,4);
    cout<<c;
    operator<<(cout,c);

}

