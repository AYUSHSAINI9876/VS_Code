#include<iostream>
#include<vector>
using namespace std;

// void change(int &b){
//     b=20;
// }
int main(){
float a=100.34;
float *ptr=&a;
float** parptr= &ptr;
cout<<a<<endl;
cout<<ptr<<endl;
cout<<&a<<endl;
ptr--;
cout<<ptr<<endl;
cout<<ptr-8;
// cout<<*(parptr)<<endl;
// cout<<**(parptr)<<endl;

// int a=10;
// change(a);
// cout<<"inside the main func.: "<<a<<endl;
return 0;
}