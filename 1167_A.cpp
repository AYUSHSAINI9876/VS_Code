#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
    cin >> s;
    bool found=false;
    for(int i=0;i<n;i++){
        if(s[i]=='8' && n-i>=11){
            found=true;
            break;
        }
    }
    if(found){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }
    }
return 0;
}