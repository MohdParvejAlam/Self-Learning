#include<iostream>
using namespace std;

    float fun(){
        return 2.3f;
    }

int main(){
    int a=10;
    float b=2.3;
    decltype(b) c= 12.3;
    // double d=4.3;
    // int i =4;
    // auto A = 2*d+i;
  auto x =fun();
  cout<<x<<" "<<endl;
}