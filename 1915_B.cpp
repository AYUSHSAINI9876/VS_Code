#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        vector<vector<char>>mat(3,vector<char>(3));
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                cin >> mat[i][j];
            }
        }
        char Xor=0;
        for(int i=0;i<3;i++){
            for(int j=0;j<3;j++){
                Xor^=mat[i][j];
            }
        }
        cout << Xor << endl;
    }
    return 0;
}