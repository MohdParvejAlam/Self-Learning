package StringClassAndPrinting;

public class StringObject {
    public static void main(String[] args){
        String str1 = "Java Program";
        String str2 = new String("Java");
        char c[] =  {'H','e','l','l','o'};
        String str3 = new String(c);
        byte b[] = {65,66,67,68};
        String str4 = new String(b,1,3);
        System.out.println(str4);
        
    }
    
}
