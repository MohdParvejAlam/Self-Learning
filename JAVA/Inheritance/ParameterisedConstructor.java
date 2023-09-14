package Inheritance;

class P{
    public P(){
        System.out.println("Non param of Parent constructor");
    }
    public P(int x){
        System.out.println("param of Parent constructor");
    }
}

class C extends P{
    
    public C(){
        
        System.out.println("Non param of Child constructor");
    }
     public C(int y){
        
        System.out.println("param of Child constructor");
    }
    public C(int y,int z){
        super(y);
        System.out.println("2 param of Child constructor");
    }
}

public class ParameterisedConstructor {
    public static void main(String[] args) {
        C c = new C(10,20);
    }
}
