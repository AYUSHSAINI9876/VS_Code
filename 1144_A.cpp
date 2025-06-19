#include <bits/stdc++.h>
using namespace std;

bool hasCOnsecutiveChars(string s){
    sort(s.begin(), s.end());
    for(int i=0;i<s.size()-1;i++){
        if(s[i+1]-s[i]!=1){
            return false;
        }
    }
    return true;
}

bool UniqueChars(string s){
    set<char> uniqueChars(s.begin(), s.end());
    return uniqueChars.size() == s.size();
}

int main()
{
    int n;
    cin >> n;
    vector<string> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if(hasCOnsecutiveChars(arr[i]) && UniqueChars(arr[i])) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
return 0;
}