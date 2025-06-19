#include <bits/stdc++.h>
using namespace std;

int countDigs(int n){
    vector<int>ans;
    while(n>0){
        ans.push_back(n%10);
        n/=10;
    }
    return ans.size();
}

int main() {
    int n,t;
    cin >> n >> t;
    bool found = false;
    vector<string> ans;
    if(t == 10 && n == 1){
        cout << -1;
        return 0;
    }
    if(t == 10){
        string res = "1";
        for(int i = 1; i < n; i++){
            res += '0';
        }
        cout << res;
        return 0;
    }
    string res = to_string(t);
    while(res.length() < n){
        res += '0';
    }
    cout << res;
    return 0;
}