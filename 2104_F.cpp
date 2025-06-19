#include <bits/stdc++.h>
using namespace std;

string res(long long n){
    int m=n+1;
    string s=to_string(n)+to_string(m);
    sort(s.begin(), s.end());
    return s;
}

int main()
{
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        unordered_set<string>st;
        for(long long i = 1; i <= n; i++){
            st.insert(res(i));
        }
        cout << st.size() << endl;
    }
    return 0;
}