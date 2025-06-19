#include <bits/stdc++.h>
using namespace std;

int removeZeros(int num) {
    int result = 0, place = 1;
    while (num > 0) {
        int digit = num % 10;
        if (digit != 0) {
            result += digit * place;
            place *= 10;
        }
        num /= 10;
    }
    return result;
}

int main() {
        int a,b;
        cin >> a >> b;
        int c=a+b;
        if(removeZeros(a)+removeZeros(b)==removeZeros(c)){
            cout << "YES";
        }
        else{
            cout << "NO";
        }
    return 0;
}