#include <bits/stdc++.h>
using namespace std;

int main() {
    long long l,r;
    cin >> l >> r;
    if (r - l + 1 >= 2019) {
        cout << 0 << endl;
        return 0;
    }
    int mini=2019;
    for(long long i=l;i<=r;i++){
        for(long long j=i+1;j<=r;j++){
            mini=min(mini,(int)((i%2019)*(j%2019))%2019);
        }
    }
    cout << mini;
    return 0;
}