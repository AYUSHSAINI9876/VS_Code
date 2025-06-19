#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    map<string, int>freq;
    for (int i = 0; i < n; i++) {
        string team;
        cin >> team;
        freq[team]++;
    }
    string ans;
    int count=0;
    for(auto&it:freq){
        if(it.second>count){
            count=it.second;
            ans=it.first;
        }
    }
    cout << ans << endl;
    return 0;
}