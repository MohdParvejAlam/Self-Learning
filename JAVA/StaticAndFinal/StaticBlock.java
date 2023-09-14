package StaticAndFinal;

class SB{
static{
        System.out.println("Block1");
    }
    
static{
        System.out.println("Block2");
    }
}

public class StaticBlock {
    
    public static void main(String[] args) {
        SB sb = new SB();
        System.out.println("Main block");
    }
    
}
