#include <bits/stdc++.h>
using namespace std;

long long fact(long long n){
    if(n==0 || n==1){
        return 1;
    }
    
    return n*fact(n-1);
}
int main() {
    long long a,b;
    cin >> a >> b;  
    long long mini=min(a,b);
    cout << fact(mini);
    return 0;
}