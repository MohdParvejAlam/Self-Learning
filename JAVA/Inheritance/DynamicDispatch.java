package Inheritance;

class Supers{
    public void meth1(){
        System.out.println("Super meth1");
    }
    public void meth2(){
        System.out.println("Super meth2");
    }

}

class Subs extends Supers{
    @Override
    public void meth2(){
        System.out.println("Sub meth2");
    }

    public void meth3(){
        System.out.println("Sub meth3");
    }
}

public class DynamicDispatch {
    public static void main(String[] args) {
        Supers s = new Subs();
        s.meth1();
        s.meth2();
        //s.meth3();
    }
}
