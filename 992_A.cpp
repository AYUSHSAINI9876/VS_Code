#include <bits/stdc++.h>
using namespace std;

bool hasZeroes(const vector<int> &arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] == 0)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    set<int> st(arr.begin(), arr.end());
    if (hasZeroes(arr))
    {
        cout << st.size() - 1 << endl;
    }
    else
    {
        cout << st.size() << endl;
    }
    return 0;
}