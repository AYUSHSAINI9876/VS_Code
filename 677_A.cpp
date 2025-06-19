#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,h;
    cin >> n >> h;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(arr[i]>h){
            count1++;
        }
        else{
            count2++;
        }
    }
    cout << 2*count1+count2;
    return 0;
}