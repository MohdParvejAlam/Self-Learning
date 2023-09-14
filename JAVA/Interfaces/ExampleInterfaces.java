package Interfaces;

class Phone{
    public void call(){
        System.out.println("Phone calling");
    }
   public void sms(){
        System.out.println("Phone sending SMS");
    }
}

interface ICamera{
    void click();
    void record();
}
interface IMusicPlayer{
   void play();
   void stop();
}


class SmartPhone extends Phone implements ICamera,IMusicPlayer{

    public void videoCall(){
        System.out.println("Smart pHone Video calling");
    }
    @Override
    public void play() {
       System.out.println("Smart Phone Playing music");
    }

    @Override
    public void stop() {
       System.out.println("Smart Phone stop music");
    }

    @Override
    public void click() {
       System.out.println("Smart Phone Clicking photo");
    }

    @Override
    public void record() {
        System.out.println("DSmart Phone recording Video");
    }
    
}

public class ExampleInterfaces {
    public static void main(String[] args) {
        SmartPhone Sp = new SmartPhone();
       Sp.play();
       Sp.call();
       Sp.click();
       Sp.record();
       Sp.call();

       Phone ph = new SmartPhone();
       ph.call();
       ph.sms();
       

       ICamera ic = new SmartPhone();
       ic.click();
       ic.record();

       IMusicPlayer im = new SmartPhone();
       im.play();
       im.stop();
    }
}
