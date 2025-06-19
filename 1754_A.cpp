#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int count=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='Q'){
                count++;
            }
            else{
                if(count > 0){
                    count--; 
                }
            }
        }
        if(count == 0){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}