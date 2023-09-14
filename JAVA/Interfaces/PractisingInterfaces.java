package Interfaces;

interface Test{
    void meth1();
    void meth2();
}

class My implements Test{
    public void meth1(){
        System.out.println("Meth 1 of My");
    }
    public void meth2(){
        System.out.println("Meth 2 of My");
    }
    public void meth3(){
        System.out.println("Meth 3 of my class");
    }
}

public class PractisingInterfaces {
    public static void main(String[] args) {
        Test t= new My() ;
        t.meth1();;
        t.meth2();
        //t.meth1();
    }
}
