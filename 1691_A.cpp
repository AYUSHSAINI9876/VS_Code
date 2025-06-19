#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int>arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        int count1=0,count2=0;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                count1++;
            }
            else{
                count2++;
            }
        }
        cout << n-max(count1,count2) << endl;
    }
    return 0;
}