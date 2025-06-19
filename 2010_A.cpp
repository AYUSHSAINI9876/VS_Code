#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int sum1=0,sum2=0;
        for(int i=0;i<arr.size();i+=2){
            sum1+=arr[i];
        }
        for(int i=1;i<arr.size();i+=2){
            sum2+=arr[i];
        }
        cout << sum1-sum2 << endl;
    } 
    return 0;
}