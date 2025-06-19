#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t; 
    while (t--) {
        string s;
        cin >> s;
        map<char, int> freq;
        for (char c : s) {
            freq[c]++;
        }
        bool found=false;
        for (auto it : freq) {
            if(it.second==s.size()){
                found=true;
                break;
            }
        }
        if(!found) {
            bool swapped = false;
            for(int i=0;i<s.size();i++){
                for(int j=i+1;j<s.size();j++){
                    if(s[i]!=s[j]){
                        swap(s[i], s[j]);
                        swapped = true;
                        break;
                    }
                }
                if (swapped) break;
            }
            cout << "Yes" << endl << s << endl;
        }
        else {
            cout << "No" << endl;
        }
    }
    return 0;
}