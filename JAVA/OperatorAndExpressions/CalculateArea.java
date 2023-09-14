package OperatorAndExpressions;

import java.util.Scanner;

public class CalculateArea {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int a, b , c;
        System.out.println("Enter the 3 sides of triangle");
        a= sc.nextInt();
        b= sc.nextInt();
        c= sc.nextInt();
        float s;
        double area;
        s = (a+b+c)/2f;
        area = Math.sqrt(s*(s-a)*(s-b)*(s-c));

        System.out.println("Area of triangle is :" + area);
    }
    
}
