package OperatorAndExpressions;

import java.util.Scanner;

public class Cuboid {
    public static void CuboidArea(){
        Scanner sc = new Scanner(System.in);
        int length , breadth, height;
        int totalArea , Volume;
        System.out.println("Entyer the sides of cuboid ");
        length =sc.nextInt();
        breadth=sc.nextInt();
        height =sc.nextInt();
        totalArea = 2*(length*breadth+breadth*height+height*length);
        Volume = length*breadth*height;
        System.out.println("Total area of cubois is"  + totalArea);
        System.out.println("Vplume of cuboid is " + Volume);
    }
    
}
