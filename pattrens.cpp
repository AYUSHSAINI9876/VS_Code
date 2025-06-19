#include <iostream>
using namespace std;

int main()
{

    // int n=3;
    // int num=1;

    // for(int i=0;i<n;i++){
    //     for(int j=0;j<n;j++){
    //         cout<<num<<" ";
    //         num++;
    //     }
    //       cout<<endl;
    // }

    // reverse triangle
    //  int n=5;
    //  for (int i=0;i<=n-1;i++){
    //      for(int j=i+1;j>0;j--){
    //      cout<<j<<" ";
    //      }
    //      cout<<endl;
    //  }

    // flyod's triangle
    //  int n = 5;
    //  int num=1;
    //  for (int i = 1; i <= n; i++) {
    //      for (int j = 1; j <= i; j++) {
    //          cout<<num<<" ";
    //          num++;
    //      }
    //      cout<<endl;
    //   }

    // inverted triangle with numbers
    //  int n = 5;
    //  for (int i = 1; i <= n; i++) {
    //      for (int j = 1; j <= i; j++) {
    //          cout<<" ";
    //      }
    //      for(int j=0;j<n-i;j++){
    //        cout<<(i+1);
    //  }
    //      cout<<endl;
    //   }

    // number pyramid
     int n = 5;
      for (int i = 0; i < n; i++) {
          for (int j = 0; j <n-i-1; j++) {
          cout<<" ";
          }
          for(int j=1;j<=i+1;j++){
             cout << j << " ";
          }
          for(int j=i;j>0;j--){
              cout << j <<" ";
          }
          cout<<endl;
       }

    // butterfly pattern
    // int n = 5;
    // for (int i = 1; i <= n; i++) {
    //     for (int j = 1; j <= i; j++) {
    //             cout<<"*";
    //         }
    //         int spaces =2*(n-i);
    //         for (int j = 1; j <= spaces; j++) {
    //             cout<<" ";
    //         }
    //         for (int j = 1; j < i; j++) {
    //             cout<<"*";
    //         }
    //         cout<<endl;
    //     }
    //     for (int i = n; i >= 1; i--) {
    //         for (int j = 1; j <= i; j++) {
    //                 cout<<"*";
    //             }
    //             int spaces =2*(n-i);
    //             for (int j = 1; j <= spaces; j++) {
    //                 cout<<" ";
    //             }
    //             for (int j = 1; j <= i; j++) {
    //                 cout<<"*";
    //             }
    //             cout<<endl;
    //         }

    // arbitrary pattern

    // int n=5 ;

    // for (int i = 1; i <= n; i++)
    // {
    //     for (int j = 1; j <=n-i+1; j++)
    //     {
    //         cout << j << " ";
          
    //     }
    //     cout << endl;
    // }

    // reverse triangular pattern
    // int n=5;
    // for (int i=0;i<=n;i++){
    //     for(int j=0;j<i;j++){
    //     cout<<" ";
    //     }
    //     for(int j=0;j<2*n-(2*i+1);j++){
    //     cout<<"*";
    //     }
    //     for(int j=0;j<i;j++){
    //     cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n=1;
    // for (int i=1;i<=5;i++){
    //     for(int j=1;j<=i;j++){
    //     cout<<n<<" ";
    //     n++;
    //     }
    //     cout<<endl;
    // }
    return 0;
}