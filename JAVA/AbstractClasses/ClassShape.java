package AbstractClasses;

abstract class Shape{
    //public int radious;
    abstract public double perimeter();
    abstract public double area();
}

class Reactangle extends Shape{
    int length;
    int breadth;
    @Override
    public double perimeter() {
        return 2*(length+breadth);
    }
    @Override
    public double area() {
        return length*breadth;
    }
    
}

class Circle extends Shape{
    public double radious;
    @Override
    public double perimeter() {
        return 2*Math.PI*radious;
    }

    @Override
    public double area() {
       return Math.PI*radious*radious;
    }
    
}

public class ClassShape {
    public static void main(String[] args) {
        Circle Ci = new Circle();
        Ci.radious=7;
        
        Reactangle Re = new Reactangle();
        Re.length=5;
        Re.breadth=10;

        Shape s= Re;
        System.out.println(Re.area());
        System.out.println(Ci.area());
        System.out.println(s.perimeter());
    }
}
