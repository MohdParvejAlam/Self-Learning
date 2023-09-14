#include<iostream>
using namespace std;

namespace first{

void fun(){
    cout<<"first fun"<<endl;
}
}

namespace second{

void fun(){
    cout<<"Second fun"<<endl;
}
}

using namespace first;

int main(){
    second::fun();
}