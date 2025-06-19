#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t; 
    while (t--) {
        int n,x;
        cin >> n >> x;
        vector<int>arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i]; 
        }
        int a = 0;            
        int b = -1;   
        bool c = false;     
        bool found = true;        
        for (int i = 0; i < n; i++) {
            if(arr[i] == 0){ 
                a++; 
            } else {
                if(c){
                    if(a<b){
                        a++;
                    }else{
                        found = false; 
                        break;          
                    }
                }else{
                    c=true; 
                    b=a+x;
                    a++;
                }
            }
        }
        if(found){
            cout << "YES" << endl; 
        } 
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}