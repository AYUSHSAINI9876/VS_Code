#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--) {
        int n;
        cin >> n;
        vector<int>arr;
        arr.push_back(2); 
        int st=3,end=n;   
        bool flag=true; 
        while (st <= end) {//bin_search
            if(flag){
                arr.push_back(end); 
                end--;
            }
            else {
                arr.push_back(st);
                st++; 
            }
            flag=!flag; 
        }
        arr.push_back(1); 
        for (int i=0;i<n;i++){
            cout << arr[i]; 
            if(i<n-1){
                cout << " ";
            }
        }
        cout << endl;
    }
    return 0;
}