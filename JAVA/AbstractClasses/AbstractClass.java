package AbstractClasses;

abstract class Super{
    Super(){
        System.out.println("Super Constructor");
    }
    public void meth1(){
        System.out.println("meth 1 of super");
    }
   abstract public void meth2();
}

class Sub extends Super{

    @Override
    public void meth2() {
        System.out.println("sub of meth2");
    }
    
}
public class AbstractClass {
    public static void main(String[] args) {
       // Super s ;// new Super();
       // s.meth1();
       Super S = new Sub();
       S.meth1();
       S.meth2();
    }
}
