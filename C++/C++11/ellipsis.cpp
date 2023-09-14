#include<iostream>
#include <cstdarg>
using namespace std;

int sum(int n,...){
    va_list list;
    va_start(list,n);
    int x;
    int s=0;
    for(int i=0;i<n;i++){
        x=va_arg(list,int);
        s+=x;
    }
    return s;
}

int main(){
  cout<<sum(5,2,5,6,7,9)<<endl;
  cout<<sum(7,2,5,6,7,9,9,5)<<endl;
}