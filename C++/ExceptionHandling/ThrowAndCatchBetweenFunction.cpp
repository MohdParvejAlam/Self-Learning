#include<iostream>
using namespace std;

int Divide(int a,int b){
    if(b==0)
    throw 1;
    return a/b;
}

int main(){
    int a=8,b=0,c;
    try
    {
        
        c=Divide(a,b);
        cout<<c<<endl;
    }
    catch(int e)
    {
        cout<<"Division by zero "<<e<<endl;
    }
   cout<<"Bye"<<endl;    
}