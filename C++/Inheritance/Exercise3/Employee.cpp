#include<iostream>
using namespace std;

class Employee{
    private:
    int eid;
    string name;
    public:
    Employee(int e, string n){
        eid=e;
        name=n;
    }
    int getEmployeeId(){
        return eid;
    }
    string getEmployeeName(){
        return name;
    }
};

class FulltimeEmployee : public Employee{
    private:
    int salary;
    public:
    FulltimeEmployee(int e,string n,int s):Employee(e,n){
        salary=s;
    }
    int getSalary(){
        return salary;
    }
};

class ParttimeEmployee: public Employee{
    private:
    int wage;
    public:
    ParttimeEmployee(int e,string n,int w):Employee(e,n){
        wage=w;
    }
    int getWage(){
        return wage;
    }
};


int main(){
    ParttimeEmployee p1(1,"John", 300);
    FulltimeEmployee p2(2,"Raj",5000);

    cout<<"Salary of "<<p2.getEmployeeName()<<" is "<<p2.getSalary()<<endl;
    cout<<"Salary of "<<p1.getEmployeeName()<<" is "<<p1.getWage()<<endl;

}