#include <bits/stdc++.h>
using namespace std;

int main() {
        int a,b;
        cin >> a >> b;
        if(a==1 && b==2){
            cout << 3;
        }
        if(a==2 && b==3){
            cout << 1;
        }
        if(a==3 && b==1){
            cout << 2;
        }
        if(a==1 && b==3){
            cout << 2;
        }
        if(a==2 && b==1){
            cout << 3;
        }
        if(a==3 && b==2){
            cout << 1;
        }
    return 0;
}