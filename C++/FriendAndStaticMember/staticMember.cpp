#include<iostream>
using namespace std;
 
 class test{
    public:
    int a;
    static int count;
    public:
    test(){
        a=10;
        count++;
    }
    static int getCount(){
        //a++;
        return count;
    }
 };

 int test::count=0;

int main(){
    test t1,t2;
    cout<<t1.count<<endl;
    cout<<t2.count<<endl;
    t1.count=20;
    cout<<t2.count<<endl;
    cout<<test::count;
    cout<<t1.getCount();
}