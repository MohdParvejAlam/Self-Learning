#include<iostream>
using namespace std;
 

//  class Demo{
//     public:
//     int x=10; 
//     int y=20;
//     void display()const {
//         //x++;
//         cout<<x<<" "<<y<<endl;
//     }
//  };

void fun(const int  &x,int &y){
cout<<x<<" "<<y<<endl;
//x++;
y++;
}

int main(){
//       int x=10;
//     //cout<<x<<endl;
//     int const  *ptr=&x;
//    // ++(*ptr);
//    int y=20;
//    ptr = &y;
//     cout<<*ptr<<" "<<x<<endl;

//  int x=10;
//     //cout<<x<<endl;
//     const int * const ptr=&x;
//     //++(*ptr);
//    int y=20;
//    //ptr = &y;
//     cout<<*ptr<<" "<<x<<endl;


//  Demo d;
//  d.display();

int a=10;int b=20;
fun(a,b);

cout<<"After the main "<<a<<" "<<b;
 }