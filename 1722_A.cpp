#include <bits/stdc++.h>
using namespace std;
 
int lowercount(string &s){
    int count=0;
    for(char ch:s){
        if(ch==tolower(ch)){
            count++;
        }
    }
    return count;
}
int main() { 
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        bool found=false;
        if (n == 5 && lowercount(s) == 4) {
            for (char ch : s) {
                if (ch == 'T') {
                    string temp = s;
                    sort(temp.begin(), temp.end());
                    if (temp == "Timru") {
                        found = true;
                    }
                    break;
                }
            }
        }
        if(found){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" <<endl;
        }
    }
    return 0;
}