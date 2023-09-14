package Loops;

import java.util.Scanner;

public class Fibonocci {
    public static void main(String args[]){
        //program for AP series
        // int a,d,n;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Program to print the Ap series ");
        // System.out.println("Enter the a d and n ");
        // a= sc.nextInt();
        // d= sc.nextInt();
        // n= sc.nextInt();
        // //int l[];
        // for(int i = 1; i<=n ; i++){
        //     int l = a+(i-1)*d;
        //     System.out.print(l+" ");
        // }


        //Program for GP series
        // int a, r, n;
        // Scanner sc = new Scanner(System.in);
        // System.out.println("Program for gp series");
        // System.out.println("Enter the a r and n");
        // a=sc.nextInt();
        // r=sc.nextInt();
        // n=sc.nextInt();
        // for(int i=1;i<=n;i++){
        //     int l = (int) (a*Math.pow(r, i-1));
        //     System.out.print(l+" ");
        // }


        //Program for fibonocci series
        int n;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of terms ");
        n = sc.nextInt();
        int l1 =0,l2=1;
        for(int i=1;i<=n;i++){
          int next = l1+l2;
          System.out.print(next+" ");
          l1=l2;
          l2=next;
        }
    }
}
