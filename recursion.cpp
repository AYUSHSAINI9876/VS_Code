#include<iostream>
using namespace std;

//counting numbers
// void printnumbers(int n){
//     if(n==1){
//         cout<<"1 "<<endl;
//         return;
//     }
//     cout<<n<<" ";
//     printnumbers(n-1);
// }
// int main(){
//     printnumbers(12);
//     return 0;
// }

//factorial

// int fact(int n){
//     if(n==0|| n==1){
//         return 1;
//         }
//       return n*(fact(n-1));
      
//     }
//   int main(){
//     cout<<fact(4);
//     return 0;
// }

//sum of n natural numbers

int sum(int n){
    if(n==1){
        return 1;
    }
    return n+sum(n-1);
}
  int main(){
    cout<<sum(10);
    return 0;
}
