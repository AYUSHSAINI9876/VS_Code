#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,d;
    cin >> a >> b >> c >> d;
    vector<int>ans;
    ans.push_back(a);
    ans.push_back(b);
    ans.push_back(c);
    ans.push_back(d);
    sort(ans.begin(), ans.end());
    bool triangle = false, segment = false;

    for (int i = 0; i < 2; ++i) {
        int x = ans[i], y = ans[i+1], z = ans[i+2];
        if (x + y > z){
            triangle = true;
        }
        else if (x + y == z){
            segment = true;
        }
    }
    if (triangle){
        cout << "TRIANGLE";
    }
    else if (segment){
        cout << "SEGMENT";
    }
    else{
        cout << "IMPOSSIBLE";
    }
    return 0;
}