import java.util.*;
public class comparision {

    public static void printCompare(int a,int b){
        if(a>b){
        System.out.println("first is greater than the second.");
        }else{
            System.out.println("first is smaller than the second.");
        }
        return;
        }
       
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        printCompare(a,b);
       
    }
}



