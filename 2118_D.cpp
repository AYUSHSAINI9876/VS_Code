#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        long long n, k;
        cin >> n >> k;
        vector<long long>arr1(n);
        vector<long long>arr2(n);
        map<long long,long long>traffic;

        for (int i = 0; i < n; i++){
            cin >> arr1[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> arr2[i];
            traffic[arr1[i]]=arr2[i];
        }
        int q;//queries
        cin >> q;
        vector<long long>start(q);
        for (int i = 0; i < q; i++){
            cin >> start[i];
        }
        for (long long num : start) {
            long long curr=num;
            int x=1;
            int t=0;
            set<tuple<long long,int,int>>vis;
            bool found=false;
            while(true){
                if(curr<1 || curr>1e15) {
                    found = true;
                    break;
                }
                auto it=make_tuple(curr,t%k,x);
                if (vis.count(it)){
                    break; 
                }
                vis.insert(it);
                if(traffic.count(curr)){
                    long long d=traffic[curr];
                    if(t%k==d){
                        x*=-1;
                    }
                }
                curr+=x;
                t++;
            }
            if(found) {
                cout << "YES" << endl;
            } else {
                cout << "NO" << endl;
            }
        }
    }
    return 0;
}