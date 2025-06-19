#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int sum1=0,sum2=0,sum3=0;
    for(int i=0;i<n;i+=3){
        sum1+=arr[i];
    }
    for(int i=1;i<n;i+=3){
        sum2+=arr[i];
    }
    for(int i=2;i<n;i+=3){
        sum3+=arr[i];
    }
    int maxi=max({sum1,sum2,sum3});
    if(maxi==sum1){
        cout << "chest";
    }
    else if(maxi==sum2){
        cout << "biceps";
    }
    else{
        cout << "back";
    }
    return 0;
}