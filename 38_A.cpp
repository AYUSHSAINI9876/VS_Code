#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>di(n-1);
    for(int i=0;i<n-1;i++){
        cin >> di[i];
    }
    int a,b;
    cin >> a >> b;
    int sum=0;
    for(int i=a-1;i<(b-1);i++){
       sum+=di[i];
    }
    cout << sum << endl;
    return 0;
}