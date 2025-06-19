#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        map<int, vector<int>> pos;
        for (int i = 0; i < n; i++) {
            pos[arr[i]].push_back(i + 1);  // store 1-based index
        }

        // The value with only one occurrence is the unique one
        for (auto p : pos) {
            if (p.second.size() == 1) {
                cout << p.second[0] << endl;
                break;
            }
        }
    }
    return 0;
}