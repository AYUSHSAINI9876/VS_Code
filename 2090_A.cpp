#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        long long x,y,a;
        cin >> x >> y >> a;
        double total=a+0.5;
        double depth=0;
        bool flag=true;
        while(depth<=total){
            if(flag){
                depth+=x;
            }
            else{
                depth+=y;
            }
            if(depth>total){
                break;
            }
            flag=!flag;
        }
        if(flag){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }
    return 0;
}