#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        int n;
        char d;
        cin >> n >> d;
        string s;
        cin >> s;
        bool inserted = false;
        for(int i=0;i<n;i++){
            if(s[i]<d){
                s.insert(i,1,d);
                inserted = true;
                break;
            }
        }
        if (!inserted) s.push_back(d);
        cout << s << endl;
    }
    return 0;
}