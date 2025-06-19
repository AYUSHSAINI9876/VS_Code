#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<vector<int>>mat(n,vector<int>(3));
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            cin >> mat[i][j];
        }
    }
    int count=0;
    for(int i=0;i<n;i++){
        int sum = mat[i][0] + mat[i][1] + mat[i][2];
        if (sum >= 2) {
            count++;
        }
    }
    cout << count;
    return 0;
}