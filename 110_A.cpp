#include <bits/stdc++.h>
using namespace std;

bool luckyDigits(int count){
    if(count==0)return false;
    while (count > 0) {
        int digit = count % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        count /= 10;
    }
    return true;
}

int main() {
    string n;
    cin >> n;
    int luckyCount = 0;
    for (char digit : n) {
        if (digit == '4' || digit == '7') {
            luckyCount++;
        }
    }
    if(luckyDigits(luckyCount)){
        cout << "YES";
    }
    else{
        cout << "NO";
    }
    return 0;
}