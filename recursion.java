
// public class recursion {

    // public static void printnumbers(int n){
    //     if(n==6){
    //         return;
    //     }
    //     System.out.println(n);
    //     printnumbers(n+1);
    // }
    // public static void main(String[] args) {
    //     int n=1;
    //     printnumbers(n);
    // }
    // public static void printsum(int i,int n,int sum){
    //     if(i==n){
    //         sum+=i;
    //         System.out.println(sum);
    //         return;
    //     }
    //     sum+=i;
    //     printsum(i+1,n,sum);
    // }
    // public static void main(String[] args) {
    //     printsum(1,5,0);

//     public static int factorial(int n) {
//         // Base case: if n is 0 or 1, return 1
//         if (n == 0 || n == 1) {
//             return 1;
//         }
//         // Recursive case: n * factorial of (n-1)
//         return n * factorial(n - 1);
//     }

//     public static void main(String[] args) {
//         int n = 6; // Example number
//         int result = factorial(n);
//         System.out.println("Factorial of " + n + " is: " + result);
//     }
// }

// public static int power(int x,int n) {
    // Base case: when the base take n iterations

//     if(n==0){
//         return 1;
//     }
//     if(x==0){
//         return 0;
//     }
//     int xpownm=power(x,n-1);
//     int pown=x*xpownm;
//     return pown;
// }

// public static void main(String[] args) {
//     int x=2,n=5; // Example number
//     System.out.println(power(x,n));
// }
// }

// fibonacci series

// public static int fib(int n) {
// if(n<=1){
//     return n;
// }
// else {
//     return fib(n - 1) + fib(n - 2);  // Recursive case
// }
// }
// public static void main(String[] args){
// int n=10; // Example number
// System.out.print(fib(n));
// }
// }

// string reversal

// public static void printrev(String str,int idx){
//     if(idx==0){
//         System.out.println(str.charAt(idx));
//         return;
//     }
//     System.out.print(str.charAt(idx));
//     printrev(str,idx-1);
// }
// public static void main(String[] args) {
//     String str="abcd";
//    printrev(str,str.length()-1);
// }
// }

// check sorting

// public static boolean issorted(int arr[],int idx){
//     if(idx == arr.length-1){
//         return true;
//     }
//     if(arr[idx]<arr[idx+1]){
//         return issorted(arr,idx+1);
//     }else{
//         return false;
//     }
// }
// public static void main(String[] args) {
//     int arr[]={1,5,3};
//     System.out.println(issorted(arr,0));
// }
// }

// remove duplicates

// public static boolean issorted(int arr[],int idx){
//     if(idx == arr.length-1){
//         return true;
//     }
//     if(arr[idx]<arr[idx+1]){
//         return issorted(arr,idx+1);
//     }else{
//         return false;
//     }
// }
// public static void main(String[] args) {
//     int arr[]={1,5,3};
//     System.out.println(issorted(arr,0));
// }
// }
