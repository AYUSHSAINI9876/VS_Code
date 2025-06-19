import java.util.*;

public class equality {
    public static void main(String args[]){
        Scanner sc = new Scanner (System.in);
        int a=sc.nextInt();
        int b=sc.nextInt();
        if(a==b){
            System.out.println("both numbers are equal.");
        }
        else if(a>b){
            System.out.println("first number is greater than the second.");
        }
        else{
            System.out.println("first number is smaller than the second.");
        }
}
}
