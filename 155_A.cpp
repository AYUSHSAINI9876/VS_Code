#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int count = 0;
    int best = arr[0];
    int worst = arr[0];

    for (int i = 1; i < n; i ++)
    {
        if (arr[i] > best)
        {
            count++;
            best = arr[i];
        }
        else if (arr[i] < worst)
        {
            count++;
            worst = arr[i];
        }
    }

    cout << count << endl;
    return 0;
}