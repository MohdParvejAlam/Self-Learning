#include<iostream>
using namespace std;
 
class Base{
   
    public:
    Base(){
        cout<<"Constructor of base"<<endl;
    }
   virtual  ~Base(){
       
        cout<<"Destructor of base"<<endl;
    }
}; 

class derived : public Base
{
  public:
  derived(){
    cout<<"Constructor of derived"<<endl;
  }
   ~derived(){
    cout<<"Destructor of derived"<<endl;
  }
};
void fun(){
    //derived d;
    Base *b = new derived();
     delete b;
}

int main(){
    fun();
}