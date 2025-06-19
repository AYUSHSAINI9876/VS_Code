#include <bits/stdc++.h>
using namespace std;

int countSetBits(long long n) {
    int count=0;
    while (n > 0) {
        n &= (n - 1);
        count++;
    }
    return count;
}

const int maxi= 5000 * 60;
const long long val= 4e18;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long k;
        cin >> n >> k;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        vector<long long>dp(maxi+1,val);
        dp[0]=0;
        for (int i = 0; i < n; i++){
            vector<pair<long long, int>>curr;
            curr.push_back({0, countSetBits(a[i])});
            const int ops=65;

            for (long long op = 1; op <= ops; op++) {
                curr.push_back({op, countSetBits(a[i] + op)});
            }
            for (int p = 0; p <= 60; ++p) {
                long long final=(1LL << p) - 1;
                if (final >= a[i]) {
                    long long ops=final-a[i];
                    curr.push_back({ops,countSetBits(final)});
                }
                long long tar=(1LL << p);
                if (tar >= a[i]) {
                    long long ops = tar - a[i];
                    curr.push_back({ops, countSetBits(tar)});
                }
            }
            map<int, long long> mini;
            for (const auto& p : curr) {
                int beauty_val = p.second;
                long long ops_cost = p.first;
                if (mini.find(beauty_val) == mini.end() ||
                    ops_cost < mini[beauty_val]) {
                    mini[beauty_val] = ops_cost;
                }
            }
            vector<pair<long long, int>>vec;
            for (const auto& it: mini) {
                vec.push_back({it.second, it.first});
            }
            vector<long long>next_dp(maxi + 1,val);
            for (int i = 0; i <= maxi; ++i) {
                if (dp[i] == val) {
                    continue;
                }
                for(const auto& it : vec) {
                    long long ops_cost = it.first;
                    int beauty_val = it.second;
                    long long total = dp[i] + ops_cost;
                    int beauty = i + beauty_val;
                    if (total <= k && beauty <= maxi) {
                        next_dp[beauty] = min(next_dp[beauty], total);
                    }
                }
            }
            dp=next_dp;
        }
        int maxb = 0;
        for (int i= maxi; i>= 0; i--) {
            if (dp[i] <= k) {
                maxb = i;
                break;
            }
        }
        cout << maxb << endl;
    }
    return 0;
}