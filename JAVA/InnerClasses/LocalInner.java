package InnerClasses;

class Outer{
    public void display(){
        class Inner{
            public void show(){
                System.out.println("Hello");
            }
        }
        new Inner().show();
    }
}

public class LocalInner {
    public static void main(String[] args) {
        Outer o = new Outer();
        o.display();
    }
}
