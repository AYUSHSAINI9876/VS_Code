#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s; 
    if(s[0] >= 'A' && s[0] <= 'Z'){
        cout << s << endl;
    }
    else{
        s[0]-= 32; 
        cout << s << endl;
    }
    return 0;
}