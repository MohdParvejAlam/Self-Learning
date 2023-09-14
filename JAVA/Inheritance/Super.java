package Inheritance;

class Reactangle{
    int leangth;
    int breadth;
    Reactangle(){
        leangth=breadth=1;
    }
    Reactangle(int l,int b){
        leangth=l;
        breadth=b;
    }
    public int area(){
        return leangth*breadth;
    }
}

class Cuboid extends Reactangle{
    int height;
    Cuboid(){
        height=1;
    }
    Cuboid(int h){
        height=h;
    }
    Cuboid(int l, int b, int h){
        super(l, b);
        height=h;
    }
    public int valume(){
        return leangth*breadth*height;
    }

}

public class Super {
    public static void main(String[] args) {
        //allowed
        //Reactangle r = new Cuboid();

        //Not allowed
        //Cuboid c = new Reactangle();
        Cuboid c = new Cuboid(10,20,30);
        System.out.println(c.valume());
    }
}
