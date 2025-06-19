#include<iostream>
#include<vector>
using namespace std;

vector<int> move_zero(vector<int>a,int n){
    int j=-1;
for(int i=0;i<n;i++){
    if(a[i]==0){
    j=i;
    break;
    }
}
if (j == -1)return a;

for(int i=j+1;i<n;i++){
    if(a[i]!=0){
        swap(a[i],a[j]);
        j++;
    }
} 
return a;
}
 int main() {
    vector<int> arr = {1,0,2,3,0,0,4,5,1}; // Use vector instead of array
    
    move_zero(arr,9);

    for(int val:arr){
        cout<<val<<" ";
    }
    cout<<endl;
    return 0;
}
