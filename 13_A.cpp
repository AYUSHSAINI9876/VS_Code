#include <bits/stdc++.h>
using namespace std;

int Sum(int num,int base){
    int sum=0;
    while(num>0){
        sum+=(num%base);
        num/=base;
    }
    return sum;
}

int main() {
        int a;
        cin >> a;
        int sum=0;
        for(int i=2;i<=a-1;i++){
            sum+=Sum(a,i);
        }
        int gcd = __gcd(sum, a-2);
        cout << sum/gcd << "/" << (a-2)/gcd;
    return 0;
}