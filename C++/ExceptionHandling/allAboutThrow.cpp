#include<iostream>
using namespace std;

class MyException : exception{
    
};

int Divide(int a,int b) throw(MyException)
{
    if(b==0)
    throw MyException();
    return a/b;
}

int main(){
    int a=8,b=0,c;
    try
    {
        
        c=Divide(a,b);
        cout<<c<<endl;
    }
    catch(MyException e)
    {
        cout<<"Division by zero "<<endl;
    }
   cout<<"Bye"<<endl;    
}