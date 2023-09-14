#include<iostream>
using namespace std;

// class Innova{
//     public:
//     static int price;
//     static int getPrice(){
//         return price;
//     }
// };

// int Innova :: price=20;

class Student{
   public:
   int roolNum;
   static int addNum;
   string name;

   Student(string n){
    addNum++;
    roolNum=addNum;
    name=n;
   }
   void display(){
    cout<<"Name "<<name<<":"<<"RollNum "<<roolNum<<endl;
   }

};

int Student ::addNum=0;

int main(){
    // Innova i1,i2,i3;
    // cout<<i1.getPrice()<<endl;
    // cout<<i2.getPrice()<<endl;
    // cout<<Innova::getPrice();
    Student s1("Parvej");
    Student s2("Alam");
    Student s3("Ajmal");
    Student s4("Mohit");
    Student s5("Kamal");
    s1.display();
    s5.display();
    cout<<"Addmission num "<<Student::addNum;



}