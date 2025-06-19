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
        int ai=arr[n-1],aj=arr[0],ak=arr[n-2],al=arr[1];
        cout << abs(ai - aj) + abs(aj - ak) + abs(ak-al) + abs(al-ai) << endl;
    }
    return 0;
}