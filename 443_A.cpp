#include <bits/stdc++.h>
using namespace std;

int main() {
    string input;
    getline(cin, input);
    set<char>st;
    for(char ch:input){
        if(ch>='a' && ch<='z'){
            st.insert(ch);
        }
    }
    cout << st.size();
    return 0;
}