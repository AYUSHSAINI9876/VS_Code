#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool found=false;
    for(int i=1;i<=500;i++){
        if(i*(i+1)==2*n){
            found=true;
        }
    }
    if(found){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}