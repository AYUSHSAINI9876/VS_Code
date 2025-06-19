#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;  
    while(t--){
        int n;
        cin >> n;
        vector<long long>arr(n);     
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }     
        sort(arr.begin(), arr.end());  
        long long maxi = 0;
        for(int i = 0; i < n; i++){
            long long price = arr[i];
            long long count = n - i; 
            maxi = max(maxi, price * count);
        }    
        cout << maxi << endl;
    }
    return 0;
}