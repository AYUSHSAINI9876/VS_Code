#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        map<char,int>freq;
        for(char ch:s){
            freq[ch]++;
        }
        char mostFrequentChar = s[0];
        int maxi=0;
        for(auto&it:freq){
            if (it.second > maxi) {
                maxi = it.second;
                mostFrequentChar = it.first;
            }
        }
        cout << mostFrequentChar << endl;
    }
    return 0;
}