package ObjectOrientedProgramming;

class Reactangle{
    public double length;
    public double breadth;
    public double area(){
        return length*breadth;
    }
    public double perimeter(){
        return 2*(length+breadth);
    }
    public boolean isSquare(){
        if(length==breadth)
        return true;
        else
        return false;
    }
}

public class ReactangleNew {
    public static void main(String[] args) {
        Reactangle r= new Reactangle();
        r.length=10.5;
        r.breadth=10.5;
        System.out.println("Area is "+r.area());
        System.out.println("Perimeter is "+r.perimeter());
        System.out.println("Is square "+r.isSquare());
    }
}
