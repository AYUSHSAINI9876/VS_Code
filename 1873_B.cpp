#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<long long>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }  
        sort(arr.begin(), arr.end());
        arr[0]++;
        long long product = 1;
        for(int i=0;i<n;i++){
            product *= arr[i];
        }
        cout << product << endl;
    }
    return 0;
}