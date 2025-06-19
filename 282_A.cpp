#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<string>s(n);
    for(int i=0;i<n;i++){
        cin >> s[i];
    }
    int sum=0;
    for(int i=0;i<s.size();i++){
        if(s[i]=="++X" || s[i]=="X--"){
            sum++;
        }
        else{
            sum--;
        }
    }
    cout << sum;
    return 0;
}