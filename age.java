import java.util.*;
public class age {

    public static void printage(int age){
        if(age>18){
        System.out.println("the person is eligible to vote.");
        }else{
            System.out.println("the person is not eligible to vote.");
        }
        return;
        }
       
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int age = sc.nextInt();
        printage(age);
       
    }
}




