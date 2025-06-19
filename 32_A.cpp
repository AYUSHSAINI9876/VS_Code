#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,d;
    cin >> n >> d;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(abs(arr[i]-arr[j])<=d){
                count++;
            }
        }
    }
    cout << 2*count;
    return 0;
}