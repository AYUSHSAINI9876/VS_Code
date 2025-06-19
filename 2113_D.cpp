#include <bits/stdc++.h>
using namespace std;

int calculate_score(const vector<int> &arr1, const vector<int> &arr2, int n)
{
    int score = 0;
    deque<int> p(arr1.begin(), arr1.end());
    deque<int> d(arr2.begin(), arr2.end());

    // The game always lasts exactly n rounds
    for (int rounds = 0; rounds < n; ++rounds)
    {
        if (p.empty())
        {
            break;
        }
        int p_card = p.front();
        int d_card = d.front();
        if (p_card > d_card)
        {
            score++;
            p.pop_front(); // Player's winning card is removed
        }
        else
        {
            p.pop_front();
            p.push_front(p_card);

            d.pop_front();
        }
    }
    return score;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int maxi = 0;
        maxi = calculate_score(a, b, n);
        vector<int> curr = a;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                swap(curr[i], curr[j]);
                int current_score = calculate_score(curr, b, n);
                maxi = max(maxi, current_score);
                // Swap back to restore original order for the next iteration
                swap(curr[i], curr[j]);
            }
        }
        cout << maxi << endl;
    }
    return 0;
}