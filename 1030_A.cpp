#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool found=false;
    for(int i=0;i<n;i++){
        if(arr[i]==1){
            found=true;
        }
    }
    if(found){
        cout << "HARD";
    }
    else{
        cout << "EASY";
    }
    return 0;
}