#include <bits/stdc++.h>
using namespace std;

bool isMagicNumber(string &s){
    int i=0;
    int n=s.size();
    while(i<n){
        if (i + 2 < n && s[i] == '1' && s[i + 1] == '4' && s[i + 2] == '4') {
            i += 3;
        } else if (i + 1 < n && s[i] == '1' && s[i + 1] == '4') {
            i += 2;
        } else if (s[i] == '1') {
            i++;
        } else {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if(isMagicNumber(s)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    return 0;
}