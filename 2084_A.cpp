#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n%2==0){
            cout << -1 << endl;
        }
        else{
            for(int i=n;i>=1;i--){
                cout << i << " ";
            }
            cout << endl;
        }
    }
    return 0;
}