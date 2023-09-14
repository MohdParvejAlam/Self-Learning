package Interfaces;

interface IMember{
    
    void callback();
}

class Customer implements IMember{
    String name;
    Customer(String n){
        name=n;
    }
    @Override
    public void callback() {
        System.out.println("Ok, I will visit "+name);
    }
}

class Store{
    IMember mem[] = new IMember[100];
    int count=0;
    void register(IMember m){
        
        mem[count++]=m;
    }
    void inviteSale(){
        for(int i=0;i<count;i++){
            mem[i].callback();
        }
    }
}

public class CallbackMethod {
    public static void main(String[] args) {
        Store s = new Store();
        Customer c1 = new Customer("John");
        Customer c2 = new Customer("Smith");
        s.register(c1);
        s.register(c2);
        s.inviteSale();
    }
}
