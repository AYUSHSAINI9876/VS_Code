#include <bits/stdc++.h>
using namespace std;

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    string s="";
    for(int i=0;i<s1.size();i++){
        if(s1[i]!=s2[i]){
            s+='1';
        }
        else{
            s+='0';
        }
    }
    cout << s;
    return 0;
}