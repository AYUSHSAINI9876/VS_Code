#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>b(n-2);
        for(int i=0;i<n-2;i++){
            cin >> b[i];
        }
        bool found=true;
        for(int i=0;i<n-4;i++){
            if(b[i]==1 && b[i+1]==0 && b[i+2]==1){
                found=false;
                break;
            }
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