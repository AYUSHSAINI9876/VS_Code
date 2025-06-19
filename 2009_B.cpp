#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<vector<char>>mat(n,vector<char>(4));
        for(int i=0;i<n;i++){
            for(int j=0;j<4;j++){
                cin >> mat[i][j];
            }
        }
        vector<int>ans;
        for(int i=n-1; i>=0; i--){
            for(int j=0;j<4;j++){
                if(mat[i][j]=='#'){
                    ans.push_back(j+1);
                }
            }
        }
        for(int x:ans){
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}