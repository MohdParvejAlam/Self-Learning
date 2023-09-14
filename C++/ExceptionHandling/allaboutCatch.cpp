#include<iostream>
using namespace std;

class MyException1 : exception{

};

class MyException2 : public MyException1{

};

int main(){
    int a=8,b=0,c;
    try
    {
        throw MyException1();
    }
    catch(int e)
    {
        cout<<"Int catch"<<e<<endl;
    }
    catch(float e)
    {
        cout<<"float catch"<<e<<endl;
    }
    catch(int e)
    {
        cout<<"double catch"<<e<<endl;
    }
    catch(MyException2 e){
        cout<<"NyException1 catch"<<endl;
    }
    // child catch of inherited child class must be above the parent catch 
    catch(MyException1 e){
        cout<<"NyException2 catch"<<endl;
    }
    catch(...)
    {
        cout<<"All catch"<<endl;
    }
   cout<<"Bye"<<endl;    
}