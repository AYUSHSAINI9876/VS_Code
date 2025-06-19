#include <bits/stdc++.h>
using namespace std;

// bool isRound(long long n){
//     vector<int>ans;
//     while(n>0){
//         ans.push_back(n%10);
//         n/=10;
//     }
//     for(int i=0;i<ans.size()-1;i++){
//         if(ans[i]==0){
//             return false;
//         }
//     }
//     return true;
// }

int main() {
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<int> res;
        int place = 1;
        while(n > 0) {
            int digit = n % 10;
            if(digit != 0) {
                res.push_back(digit * place);
            }
            n/=10;
            place*=10;
        }
        cout << res.size() << endl;
        for(int x : res) {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}