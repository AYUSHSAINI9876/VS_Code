#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    string ans="";
    for(int i = 0; i < s.size(); )
    {
        if(i + 2 < s.size() && s[i] == 'W' && s[i+1] == 'U' && s[i+2] == 'B') {
            if(!ans.empty() && ans.back() != ' '){
                ans+=' ';
            }
            i+=3;
        }
        else {
            ans += s[i];
            i++;
        }
    }
    if (!ans.empty() && ans.back() == ' '){
        ans.pop_back();
    }
    cout << ans;
    return 0;
}