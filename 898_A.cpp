#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    int dig=n%10;
   if(dig<5){
        n-=dig;
    }
    else{
        n+=(10-dig);
    }
    cout << n;
    return 0;
}