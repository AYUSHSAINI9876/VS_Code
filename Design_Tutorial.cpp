#include <bits/stdc++.h>
using namespace std;

const int MAX = 1e6 + 1;
bool isComposite(int n) {
    if (n <= 3) return false;
    for (int i = 2; i * i <= n; ++i){
        if (n % i == 0){
            return true;
        }
    }
    return false;
}
int main() {
    int n;
    cin >> n;
    //n as a sum of 2 comoposite numbers
    for(int i=4;i<=n/2;i++){
        if(isComposite(i) && isComposite(n-i)){
            cout<<i<<" "<<n-i<<endl;
            return 0;
        }
    }
    return 0;
}