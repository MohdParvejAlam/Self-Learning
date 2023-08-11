#include<iostream>
using namespace std;

class Student
{
private:
    int Roll;
    string Name;
    int phy;
    int math;
    int chem;
public:
    Student(int r,string n, int p,int m,int c){
        Roll=r;
        Name=n;
        phy=p;
        math=m;
        chem=c;
    }

    int totalMarks(){
        return phy+math+chem;
    }

    char grade(){
        float avg = totalMarks()/3;
        if(avg>60){
            return 'A';
        }
        else if(avg>40 && avg<60){
            return 'B';
        }
        else{
            return 'C';
        }
    }
    
};


int main(){
    int roll;
    string name;
    int p,m,c;
    cout<<"Enter rool number of student"<<endl;
    cin>>roll;
    cout<<"Enter the name of student "<<endl;
    cin>>name;
    cout<<"Enter the marks of the pcm "<<endl;
    cin>>p>>m>>c;
    Student s(roll,name,p,m,c);
    cout<<"Total Marks:"<<s.totalMarks()<<endl;
    cout<<"Grade of student:"<<s.grade();
}

