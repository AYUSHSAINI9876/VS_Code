#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int l = 0, r = n - 1;
    int sum1 = 0, sum2 = 0;
    bool flag = true; 
    while (l <= r) {
        if (arr[l] > arr[r]) {
            if (flag){
                sum1 += arr[l];
            }
            else{
                sum2 += arr[l];
            }
            l++;
        } else {
            if (flag) sum1 += arr[r];
            else{
                sum2 += arr[r];
            }
            r--;
        }
        flag = !flag;
    }
    cout << sum1 << " " << sum2;
    return 0;
}