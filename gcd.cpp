#include<iostream>

using namespace std;

int main(){
    int a, b, temp;
    cout<<"enter the first number"<<endl;
    cin>>a;

    cout<<"enter the second number"<<endl;
    cin>>b;
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    while ((b % a) != 0)
    {
        temp = b % a;
        b = a;
        a = temp;
    }
    cout<<"the gcd is "<< a <<endl;
    return 0;
}