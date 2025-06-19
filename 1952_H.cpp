#include <bits/stdc++.h>
using namespace std;

bool isPAlindrome(string s){
    int n = s.size();
    for(int i=0;i<=n/2;i++){
        if(s[i]!=s[n-i-1]){
            return false;
        }
    }
    return true;
}

int main() {
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if(isPAlindrome(s)){
           cout << "YES" << endl; 
    }else{
        cout << "NO" << endl;
    }
}
    return 0;
}