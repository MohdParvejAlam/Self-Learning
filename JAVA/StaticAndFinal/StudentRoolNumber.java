package StaticAndFinal;

import java.util.*;

class Student{
    private String RollNum;
    private static int count=1;
    Student(){
        RollNum=assignRollNumber();
    }
    private String assignRollNumber() {
        Date d = new Date();
        String rn = "Univ-"+(d.getYear()+1990)+"-"+count;
        count++;
        return rn;

    }
    public String getRollNumber(){
        return RollNum;
    }

}

public class StudentRoolNumber {
    public static void main(String[] args) {
        Student s1 = new Student();
        Student s2 = new Student();
        Student s3 = new Student();
        
        System.out.println(s1.getRollNumber());
        System.out.println(s2.getRollNumber());
        System.out.println(s3.getRollNumber());

    }
}
