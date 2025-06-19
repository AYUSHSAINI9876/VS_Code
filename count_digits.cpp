#include<iostream>
#include<string>

using namespace std;
void digits(int n){
    while(n!=0){
        int digit=n%10;
        cout << digit<<endl;
        n/=10;
    }
}

int main(){
    int n=3568;
    digits(n);
    return 0;
}
