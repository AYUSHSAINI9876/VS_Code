#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        bool found = false;
        vector<int>ans;
        // for(int i=1;i<=n;i++){
        //     for(int j=i+1;j<=n;j++){
        //         for(int k=j+1;k<=n;k++){
        //             if(i+j+k==n && i%3!=0 && j%3!=0 && k%3!=0){
        //                 found = true;   
        //                 ans.push_back(i);
        //                 ans.push_back(j);
        //                 ans.push_back(k);
        //             }
        //         }
        //     }
        // }     
        // if(found){
        //     cout << "YES" << endl;
        //     cout << ans[0] << " " << ans[1] << " " << ans[2] << endl;
        // } else {
        //     cout << "NO" << endl;
        // }
        int a = 1, b = 1, c = n - a - b;
        if (c > 0 && c % 3 != 0) {
            found = true;
        } else {
            a = 1; b = 2; c = n - a - b;
            if (c > 0 && c % 3 != 0)
                found = true;
        }

        if (found) {
            cout << "YES" << endl;
            cout << a << " " << b << " " << c << endl;
        } else {
            cout << "NO" << endl;
        }    
    }
    return 0;
}