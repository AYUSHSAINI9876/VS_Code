#include <bits/stdc++.h>
using namespace std;

bool isLucky(long long n)
{
    while (n > 0)
    {
        int digit = n % 10;
        if (digit != 4 && digit != 7)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    long long n;
    cin >> n;
    bool found=false; 
    for(long long i=1;i<=n;i++){
        if(isLucky(i) && n%i==0){
            found=true;
            break;
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