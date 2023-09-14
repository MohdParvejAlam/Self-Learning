#include<iostream>
#include<deque>

using namespace std;

int main(){
    deque<int> v = {2,4,6,8,8,10};
    v.push_back(20);
    v.push_back(30);
    //v.pop_front();
    deque<int> :: iterator itr;
    cout<<"Using iterator"<<endl;
    for( itr=v.begin();itr!=v.end();itr++){
         cout<<*itr<<endl;
    }
     cout<<"Using for each loop"<<endl;
    for(int x:v){
        cout<<x<<endl;
    }
}