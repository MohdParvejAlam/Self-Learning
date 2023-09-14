package Loops;

import java.util.Scanner;

public class Task {
    public static void main(String args[]) {
        // Display digits
        int num;
        System.out.println("Enter the number :");
        Scanner sc = new Scanner(System.in);
        num = sc.nextInt();
        // while(num>0){
        // int rem = num%10;
        // System.out.println("Digits in the number is " + rem);
        // num/=10;
        // }

        // Count digits of a num
        // int count =0;
        // while(num>0){
        // num/=10;
        // count++;
        // }
        // System.out.println("Total didgits in the num "+ count);


        //Check a num is armsstrong or not
        // int NUM = num;
        // int sum=0;
        // while(num>0){
        //     int rem =num%10;
        //     sum = sum + rem*rem*rem;
        //     num/=10;
        // }

        // if(NUM == sum){
        //     System.out.println("Number is armstrong");
        // }
        // else
        // System.out.println("Number not is armstrong");


        //reverse a number;
        // while(num>0){
        //     int rem=num%10;
        //     num/=10;
        //     System.out.print(rem);
        // }
        

        //Check a num is palindrome or not
        int num1=0,num2=num;
        while(num>0){
        int rem = num%10;
         num1 = 10*num1+rem;
         num/=10;
        }
        if(num2==num1)
        System.out.println("Number is palindrome ");
        else
        System.out.println("Number is not palindrome ");
    }

}
