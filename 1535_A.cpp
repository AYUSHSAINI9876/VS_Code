#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        int maxi1=max(a,b);
        int maxi2=max(c,d);
        vector<int>ans;
        ans.push_back(a);
        ans.push_back(b);
        ans.push_back(c);
        ans.push_back(d);
        sort(ans.begin(),ans.end());
        bool found=false;
        if((maxi1==ans[ans.size()-1] || maxi1==ans[ans.size()-2]) && (maxi2==ans[ans.size()-1] || maxi2==ans[ans.size()-2])){
            found=true;
        }
        if(found){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    return 0;
}