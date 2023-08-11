#include <iostream>
using namespace std;

class Reactangle{
   private:
   int length;
   int breadth;
   public:
   Reactangle();
   Reactangle(int l,int b);
   Reactangle(Reactangle &rect);
   int getLength(){return length;};
   int getBreadth(){return breadth;};
   void setLength(int l);
   void setBreadth(int b);
   int area();
   int perimeter();
   bool isSquare();
   ~Reactangle();
};

class Cuboid : public Reactangle{
    private:
    int height;
    public:
    Cuboid(int h=0){
        height =h;
    }
    void setHeight(int h){
        height=h;
    }
    int getHeight(){
        return height;
    }
    int volume(){
        return getLength()*getBreadth()*height;
    }
};

Reactangle::Reactangle(){
    length=1;
    breadth=1;
}

Reactangle::Reactangle(int l, int b){
    length=l;
    breadth=b;
}

Reactangle::Reactangle(Reactangle &r){
    length=r.length;
    breadth=r.breadth;
}

void Reactangle::setLength(int l){
    length=l;   
}

void Reactangle::setBreadth(int b){
    breadth=b;
}

int Reactangle::area(){
    return length*breadth;
}

int Reactangle::perimeter(){
    return 2*(length+breadth);
}

bool Reactangle::isSquare(){
    // if(length==breadth){
    //     return true;
    // }
    // else{
    //     return false;
    // }
    return length==breadth;
}

Reactangle::~Reactangle(){
    cout<<"Reactangle destroyed";
}

int main(){
    // Reactangle r1(10,5);
    // Reactangle r2(r1);
    // cout<<"Area is "<<r2.area()<<endl;
    // cout<<r2.isSquare()<<endl;    
    Cuboid c(5);
    c.setLength(5);
    c.setBreadth(10);
    cout<<"Volume is "<<c.volume()<<endl;
   
}
