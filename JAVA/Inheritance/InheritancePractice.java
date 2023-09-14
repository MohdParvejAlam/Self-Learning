package Inheritance;

class Circle{
    public double radius;
    
    public double area(){
        return Math.PI*radius*radius;
    }
    public double perimeter(){
        return 2*Math.PI*radius;
    }
    public double circumference(){
        return perimeter();
    }

} 

class  Cylinder extends Circle{
    public double height;
    public double volume(){
        return area()*height;
    }
}

public class InheritancePractice {
    public static void main(String[] args) {
        Cylinder C = new Cylinder();
        C.radius=7;
        C.height=10;
        System.out.println(C.area());
        System.out.println(C.volume());
    }
    
}
