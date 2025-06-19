#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        map<int, int> freq;
        for(int num : arr) {
            freq[num]++;
        }
        vector<int> ans;
        bool found = false;
        for(auto it : freq) {
            if(it.second >= 3){
                found = true;
                ans.push_back(it.first);
                break;
            }
        }
        if(found) {
            cout << ans[0] << endl;
        }
        else{
            cout << -1 << endl;
        }
    }
    return 0;
}