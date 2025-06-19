import java.util.*;
public class fact {

    public static void printFACTORIAL(int n){
        if(n<0){
            System.out.println("inavlid number entered!!!");
            return;
        }
        int factorial =1;
        for(int i=n;i>=1;i--){
            factorial=factorial*i;
        }
     System.out.println(factorial);
     return;
    }
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int n = sc.nextInt();
        printFACTORIAL(n);
    }
}


