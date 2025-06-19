#include <bits/stdc++.h>
using namespace std;

int main() {
   int b,k;
   cin >> b >> k;
   vector<int>arr(k);
   for(int i=0;i<k;i++){
    cin >> arr[i];
   }
   reverse(arr.begin(),arr.end());
   int parity = 0;
   for(int i=0;i<k;i++){
    int power_parity;
        if (b % 2 == 0 && i > 0) {
            power_parity = 0;
        } else {
            power_parity = 1;
        }
        parity=(parity + (arr[i] % 2) * power_parity) % 2;
   }
   if(parity==0){
    cout << "even";
   }
   else{
    cout << "odd";
   }
    return 0;
}