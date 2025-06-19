#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        int count[10] = {0}; // To count digits from 0 to 9
        int a;
        int ans = 0;
        for(int i=1;i<=n;i++){
            cin >> a;
            count[a]++;
            if (ans == 0 &&
                count[0] >= 3 &&
                count[1] >= 1 &&
                count[2] >= 2 &&
                count[3] >= 1 &&
                count[5] >= 1) {
                ans = i; 
            }
        }
        cout << ans << endl;    
    }
    return 0;
}