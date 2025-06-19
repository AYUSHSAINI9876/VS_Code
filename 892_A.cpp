#include <bits/stdc++.h>
using namespace std;

int main() {
        int n;
        cin >> n;
        vector<long long>arr1(n),arr2(n);
        for(int i=0;i<n;i++){
            cin >> arr1[i];
        }
        for(int i=0;i<n;i++){
            cin >> arr2[i];
        }
        long long sum=0;
        for(long long num:arr1){
            sum+=num;
        }
        sort(arr2.begin(),arr2.end());
        long long maxi=arr2[n-1]+arr2[n-2];
        if(maxi>=sum){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    return 0;
}