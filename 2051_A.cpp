#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--){
        int n;
        cin >> n;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        int sum1=0,sum2=0;
        for(int i=0;i<n-1;i++){
            if(a[i]>b[i+1]){
                sum1+=a[i];
                sum2+=b[i+1];
            }
        }
        cout << sum1+a[n-1]-sum2 << endl;
    }
    return 0;
}