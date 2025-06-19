
public class pattren {

    public static void main(String args[]) {

        // rectangle
        // for (int i=1;i<=4;i++){
        //     for(int j=1;j<=i;j++){
        //     System.out.print(" * ");
        //     }
        //     System.out.println();
        // }
        //hollow cylinder
        // for (int i=1;i<=4;i++){
        //     for(int j=1;j<=5;j++){
        //     if(i==1 || i==4 || j==1 || j==5){
        //     System.out.println("*");
        //     } else {
        //         System.out.println(" ");
        //     }
        //     System.out.println();
        //half pyramid
        // for (int i=4;i>=1;i--){
        //     for(int j=1;j<=i ;j++){
        //     System.out.print(" * ");
        // }
        // System.out.println();
        // }
        //rotated half pyramid
        // int n=4;
        //     for (int i=1;i<=n;i--){
        //             for(int j=1;j<=n-i ;j++){
        //             System.out.print(" ");
        //         }
        //         for(int j=1;j<=i;j++){
        //         System.out.print("*");
        //         }
        //         System.out.println();
        //         }
        // half pyramid with numbers
        // int n = 5;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print(j + " ");
        //     }
        //     System.out.println();
        // }
        //inverted half pyramid with numbers
        // int n = 5;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= n-i+1; j++) {
        //         System.out.print(j);
        //     }
        //     System.out.println();
        //  }
        // flyod's triangle
        // int n = 5;
        // int num=1;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         System.out.print(num+ " ");
        //         num++;
        //     }
        //     System.out.println();
        //  }
        //0-1 triangle
        // int n = 5;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //         int sum=i+j;
        //         if(sum%2==0){
        //             System.out.print("1 ");
        //         }else{
        //             System.out.print("0 ");
        //         }
        //     }
        //     System.out.println();
        //  }
        // butterfly pattern
        // int n = 5;
        // for (int i = 1; i <= n; i++) {
        //     for (int j = 1; j <= i; j++) {
        //             System.out.print("*");
        //         }
        //         int spaces =2*(n-1);
        //         for (int j = 1; j <= spaces; j++) {
        //             System.out.print(" ");
        //         }
        //         for (int j = 1; j <= i; j++) {
        //             System.out.print("*");
        //         }
        //         System.out.println();
        //     }
        //     for (int i = n; i >= 1; i--) {
        //         for (int j = 1; j <= i; j++) {
        //                 System.out.print("*");
        //             }
        //             int spaces =2*(n-1);
        //             for (int j = 1; j <= spaces; j++) {
        //                 System.out.print(" ");
        //             }
        //             for (int j = 1; j <= i; j++) {
        //                 System.out.print("*");
        //             }
        //             System.out.println();
        //         }
        //number pyramid
        // int n = 5;
        //  for (int i = 1; i <= n; i++) {
        //      for (int j = 1; j <n-i; j++) {
        //      System.out.print(" ");
        //      }
        //      for(int j=1;j<=i;j++){
        //         System.out.print(i + " ");
        //      }
        //      System.out.println();
        //   }
        //palindromic pattern
        // int n = 5;
        //  for (int i = 1; i <= n; i++) {
        //      for (int j = 1; j <=n-i; j++) {
        //      System.out.print(" ");
        //      }
        //      for(int j=i;j>=1;j--){
        //         System.out.print(j);
        //      }
        //      for(int j=2;j<=i;j++){
        //         System.out.print(j);
        //      }
        //      System.out.println();
        //   }
        //diamond pattern
        int n = 5;
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
        for (int i = n; i >= 1; i--) {
            for (int j = 1; j <= n - i; j++) {
                System.out.print(" ");
            }
            for (int j = 1; j <= 2 * i - 1; j++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
