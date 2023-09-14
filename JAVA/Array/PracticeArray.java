package Array;

public class PracticeArray {
    public static void main(String[] args) {
        int A[] = new int[10] ;
        A[0]=2;A[1]=8;A[2]=5;
        A[3]=3;A[4]=8;A[5]=9;
        int B[] = new int[10];
        int C[] ;
        C = new int[10]; 
        int [] D = new int[10];
        // for(int i=0;i<B.length;i++){
        //     System.out.print(B[i]);
        // }
        for(int x: A)
        {
            System.out.print(x+" ");  
        }
        // System.out.println("\n After left rotation");
        // int temp = A[0];
        // for(int i=1;i<A.length;i++){
        //     A[i-1]=A[i];
        // }
        // A[A.length-1]=temp;
        // for(int x: A)
        // {
        //     System.out.print(x+" ");  
        // }
        // System.out.println("\n After right rotation");
        // int temp1 = A[A.length-1];
        // for(int i=A.length-1;i>0;i--){
        //     A[i]=A[i-1];
        // }
        // A[0]=temp1;
        // for(int x: A)
        // {
        //     System.out.print(x+" ");  
        // }

       int x=20;
       int index =2;
       int n=6;
       for(int i = n;i>index;i--){
        A[i]=A[i-1];
       }
       A[index]=x;
       for (int i=0;i<n;i++){
        System.out.print(A[i]+" ");
       }
    }
}
