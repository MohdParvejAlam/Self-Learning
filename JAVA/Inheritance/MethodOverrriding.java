package Inheritance;

class Super{
    public void display(){
        System.out.println("Hello");
    }
}

class Sub extends Super{
   @Override
public
     void display(){
        System.out.println("Hello welcome");
    }
}

public class MethodOverrriding {
    public static void main(String[] args) {
        // Super s = new Super();
        // s.display();

        // Sub s = new Sub();
        // s.display();

        Super s = new Sub();
        s.display();
    }
}
