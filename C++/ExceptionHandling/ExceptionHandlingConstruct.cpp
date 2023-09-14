#include<iostream>
using namespace std;

int main(){
    int a=8,b=4,c;
    try
    {
        if(b==0)
        throw 1;
        c=a/b;
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
   cout<<"Bye"<<endl;    
}