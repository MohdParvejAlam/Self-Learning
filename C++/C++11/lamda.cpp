#include<iostream>
using namespace std;

template <typename T>
T fun(T p){
    p();
}

int main(){
    // auto x =[](int x,int y)->int{return x+y;}(10,5);
    // cout<<x;

    //  int a=10;
    //  auto f=[a](){cout<<a<<endl;};
    // f();
    // a++;
    // f();
    //value of a not increases

    int a=10;
     auto f=[&a](){cout<<a<<endl;};
    fun(f);
    
}