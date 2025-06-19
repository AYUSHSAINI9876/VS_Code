#include<iostream>
using namespace std;

// int printhello(){
//     cout<<"hello\n";
//     return 3;
// }
// int main(){
//     int val=printhello();
//           cout<<val<<endl;

//            return 0;
// }

// int printsum(int a,int b){
//     int sum=a+b;
//     return sum;
// }
// int main(){
//     int a,b;
//     cout<<"enter a: ";
//     cin>>a;
//     cout<<"enter b: ";
//     cin>>b;
   
//     cout<<"the sum is "<<printsum(a,b)<<".";

// int printsum(int n){
//     int sum=n*(n+1)/2;
//     return sum;
// }
// int main(){
//     int n;
//     cout<<"enter n: ";
//     cin>>n;
   
//     cout<<"the sum of first "<<n<<" natural numbers is " <<printsum(n);

// int fact(int n){
//     int fact=1;
//     for(int i=n;i>=1;i--){
//      fact*=i;
//     }
// }
// int main(){
//     int n,r;
//     cout<<"enter n: ";
//     cin>>n;
//     cout<<"enter r: ";
//     cin>>r;
//     if(n<r){
//         cout<<"it's a not defined quantity.";
//     }else{
//     cout<<"the cobination of "<<n<<"c"<<r <<" is " <<fact(n)/(fact(r)*fact(n-r));
// }

    int dectobin(int decnum){
        int ans=0,pow=1;
        while(decnum>0){
         int rem=decnum%2;
         decnum/=2;
         ans+=rem*pow;
         pow*=10;
        }
        return ans;
    }   
    int main(){
    int decnum=42;
    cout<<dectobin(decnum)<<endl;

    // int bintodec(int binnum){
    //     int ans=0,pow=1;
    //     while(binnum>0){
    //      int rem=binnum%10;
    //      binnum/=10;
    //      ans+=rem*pow;
    //      pow*=2;
    //     }
    //     return ans;
    // }   
    // int main(){
    // int binnum=110010;
    // cout<<bintodec(binnum)<<endl;
           return 0;
}