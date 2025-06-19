#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin >> n >> m;
    vector<vector<int>>arr(n,vector<int>(m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin >> arr[i][j];
        }
    }
    bool found=false;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<m-1;j++){
            if(arr[i][j]==arr[i+1][j] || arr[i][j]!=arr[i][j+1]){
                found=true;
            }
        }
    }
    if(found){
            cout << "No" << endl;
        }
        else{
            cout << "Yes" << endl;
        }
    return 0;
}