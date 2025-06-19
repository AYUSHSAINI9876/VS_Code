#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string ans;
    for(int i=0;i<s.size();){
        if(s[i]=='.'){
            ans+='0';
            i++;
        }
        if(s[i]=='-' && s[i+1]=='.'){
            ans+='1';
            i+=2;
        }
        if(s[i]=='-' && s[i+1]=='-'){
            ans+='2';
            i+=2;
        }
    }
    cout << ans;
    return 0;
}