package Methods;

public class VariableArguments {
     static int show(int ...A) {
        int s=0;
        int max=A[0];
        for(int x:A){
            //System.out.println(x);
           
            if(x>max)
            max=x;
           
        }
        return max;
    }
    public static void main(String[] args) {
        //show();
        //show(10);
        int a=show(10,20,30);
        System.out.println(a);
        //show(new int []{3,5,7,9,11,13,15});
    }

   
}
