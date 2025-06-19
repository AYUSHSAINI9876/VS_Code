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
        int zeroes=0,ones=0;
        for(char ch:s){
            if(ch=='1'){
                ones++;
            }
            else{
                zeroes++;
                zeroes=min(zeroes,ones);
            }
        }
        cout << zeroes << endl;
    }
    return 0;
}