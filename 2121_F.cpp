#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        long long s, x;
        cin >> n >> s >> x;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        long long count = 0;
        long long curr_sum = 0;
        map<long long, int> freq_without_x, freq_with_x;
        freq_without_x[0] = 1;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > x)
            {
                curr_sum = 0;
                freq_without_x.clear();
                freq_without_x[0] = 1;
                freq_with_x.clear();
                continue;
            }
            curr_sum += arr[i];
            if (arr[i] == x)
            {
                for (map<long long, int>::const_iterator it = freq_without_x.begin();
                     it != freq_without_x.end(); ++it)
                {
                    long long sum_val = it->first;
                    int freq = it->second;
                    freq_with_x[sum_val] += freq;
                }
                freq_without_x.clear();

                if (freq_with_x.count(curr_sum - s))
                {
                    count += freq_with_x[curr_sum - s];
                }
                freq_with_x[curr_sum]++;
            }
            else
            {
                long long target_prefix_sum = curr_sum - s;
                if (freq_with_x.count(target_prefix_sum))
                {
                    if (target_prefix_sum == (curr_sum - arr[i]) && s == arr[i])
                    {
                        // Since a[i] < x, its max isn't x.
                        // We do nothing here; effectively, we don't add to the count for this specific segment.
                        // The loop continues, and prefix_sum_counts_without_x will be updated as usual and remain empty.
                    }
                    else
                    { // for other cases, we can count the valid segments
                        count += freq_with_x[target_prefix_sum];
                    }
                }
                freq_without_x[curr_sum]++;
            }
        }
        cout << count << endl;
    }
    return 0;
}