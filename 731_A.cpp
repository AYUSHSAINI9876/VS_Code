#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int sum=0;
    for(int i = 0; i < s.size()-1; i++){
        int a=abs(s[i+1]-s[i]);
        sum+=min(a,26-a);
    }
    int b=abs(s[0]-'a');
    cout << sum + min(b,26-b)<< endl;
return 0;
}