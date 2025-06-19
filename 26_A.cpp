#include <bits/stdc++.h>
using namespace std;

bool hasTwoPrimeDivisors(int n){
    int count = 0;
    if(n % 2 == 0) {
        count++;
        while (n % 2 == 0){
            n /= 2;
        }
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            count++;
            while (n % i == 0){
                n /= i;
            }
        }
    }
    if (n > 1){
        count++;
    }
    return count == 2;
}

int main() {
    int n;
    cin >> n;
    int count=0;
    for(int i=1;i<=n;i++){
        if(hasTwoPrimeDivisors(i)){
            count++;
        }
}
cout << count;
    return 0;
}