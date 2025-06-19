#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int Xor=0;
        for(int i=0;i<n-1;i++){
            Xor^=arr[i];
        }
        cout << Xor << endl;
    }
    return 0;
}