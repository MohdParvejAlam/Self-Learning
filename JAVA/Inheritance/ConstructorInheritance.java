package Inheritance;

class Parent{
    public Parent(){
        System.out.println("Parent constructor");
    }
}

class Child extends Parent{
    public Child(){
        System.out.println("Child constructor");
    }
}

class GrandChild extends Child{
    public GrandChild(){
        System.out.println("GrandChild constructor");
    }
}

public class ConstructorInheritance {
    public static void main(String[] args) {
        GrandChild gc = new GrandChild();
    }
}
