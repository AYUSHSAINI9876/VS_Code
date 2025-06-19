#include <bits/stdc++.h>
using namespace std;

int sumDig(long long n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y;
        cin >> x >> y;
        // bool found =false;
        // for(long long i=0;i<=1e7;i++){
        //     if(sumDig(i)==x && sumDig(i+1)==y){
        //         found=true;
        //         break;
        //     }
        // }
        // if(found){
        //     cout << "Yes" << endl;
        // }
        // else{
        //     cout << "No" << endl;
        // }
        int diff = x - y + 1;
        
        if (diff >= 0 && diff % 9 == 0) {
            cout << "YES\n";
        } else if (y == x + 1) {
            // k = 0 case
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    } 
    return 0;
}