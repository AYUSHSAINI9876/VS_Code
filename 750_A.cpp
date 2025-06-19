#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin >> n >> k;
    int timeAvailable = 240 - k;
    int totalTime = 0;
    int count = 0;
    for (int i = 1; i <= n; i++) {
        totalTime+=5 * i;
        if(totalTime>timeAvailable){
            break;
        }
        count++;
    }
    cout << count << endl;
    return 0;
}