#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin >> n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin >> a[i];
    }
    cin >> m;
    vector<int>b(m);
    for(int i=0;i<m;i++){
        cin >> b[i];
    }
    unordered_set<int> setA(a.begin(), a.end());
    unordered_set<int> setB(b.begin(), b.end());

    for (int A : a) {
        for (int B : b) {
            int sum = A+B;
            if (setA.find(sum) == setA.end() && setB.find(sum) == setB.end()) {
                cout << A << " " << B << endl;
                return 0;
            }
        }
    }
    return 0;
}