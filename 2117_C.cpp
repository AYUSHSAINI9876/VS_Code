#include <bits/stdc++.h>
using namespace std;
const int mod = 998244353, N = 400007;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> arr[i];
        }
        int ans = 1;
        set<int> st;
        st.insert(arr[0]);
        for (int i = 1; i < n;)
        {
            int j = i;
            while (j < n && !st.empty())
            {
                st.erase(arr[j]);
                j++;
            }
            if (!st.empty())
            {
                break;
            }
            ans++;
            for (int k = i; k < j; k++)
            {
                st.insert(arr[k]);
            }
            i = j;
        }
        cout << ans << endl;
    }
}