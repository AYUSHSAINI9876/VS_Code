#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    for(int i=0;i<=c;i++){
        if((c-a*i)%b==0 && (c-a*i)>=0){
            cout<<"Yes";
            return 0;
        }
    }
    cout << "No";
    return 0;
}