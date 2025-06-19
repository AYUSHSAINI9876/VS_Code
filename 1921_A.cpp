#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        vector<vector<int>>arr(4, vector<int>(2));
        for(int i=0;i<4;i++){
            for(int j=0;j<2;j++){
              cin >> arr[i][j];
            }
        }
        set<int>x_vals, y_vals;
        for (int i = 0; i < 4; i++) {
            x_vals.insert(arr[i][0]);
            y_vals.insert(arr[i][1]);
        }
        int side=0;
        if (x_vals.size() == 2) {
            auto it=x_vals.begin();
            int x1=*it;
            ++it;
            int x2=*it;
            side=abs(x2-x1);
        } else {
            auto it=y_vals.begin();
            int y1=*it;
            ++it;
            int y2=*it;
            side=abs(y2-y1);
        }
        cout << side * side << endl;
    }
    return 0;
}