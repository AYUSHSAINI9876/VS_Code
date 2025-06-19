#include <bits/stdc++.h>
using namespace std;

bool hasDistinctDigits(int n){
    vector<int>ans;
    while(n>0){
        ans.push_back(n%10);
        n/=10;
    }
    set<int>st(ans.begin(),ans.end());
    return ans.size()==st.size();
}

int main()
{
        int n;
        cin >> n;
        vector<int>res;
        for(int i=n+1;i<1000000;i++){
            if(hasDistinctDigits(i)){
                res.push_back(i);
            }
        }
        cout << res[0]; 
    return 0;
}