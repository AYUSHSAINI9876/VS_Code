#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x1,x2,x3;
        cin >> x1 >> x2 >> x3;
        int mini=INT_MAX;
        for(int i=1;i<=max(x1,max(x2,x3));i++){
            int sum=abs(x1-i) + abs(x2-i) + abs(x3-i);
            if(mini > sum){
                mini=sum;
            } 
        }
        cout << mini << endl;
    }
    return 0;
}