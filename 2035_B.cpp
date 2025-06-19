#include <bits/stdc++.h>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}
bool conatinsOnlythreeAndSix(int n) {
    while (n > 0) {
        int digit = n % 10;
        if (digit != 3 || digit != 6) {
            return false;
        }
        n /= 10;
    }
    return true;
}
bool isDivisibleByBothThirtyThreeAndSixthSix(int n) {
    return (n % 33 == 0 && n % 66 == 0);
}
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<long long>ans;
        for(int i=1;i<=1e9+1;i++){
            if(countDigits(i)==n && conatinsOnlythreeAndSix(i) && isDivisibleByBothThirtyThreeAndSixthSix(i)){
                ans.push_back(i);
            }
        }
        cout << ans[0] << endl;
    }
    return 0;
}