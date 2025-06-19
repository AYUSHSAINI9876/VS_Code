#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){
            cin >> a[i];
        }
        for(int i=0;i<n;i++){
            cin >> b[i];
        }
        sort(a.begin(), a.end());
        vector<int> c(n);
        for(int i=0;i<n;i++){
            c[i]=a[i]+b[i];
        }
        set<int> unique_elements(c.begin(), c.end());
        if(unique_elements.size()>=3){
             cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        } 
    }
    return 0;
}