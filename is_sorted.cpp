#include<iostream>
#include<vector>
using namespace std;

bool isorted(vector<int>arr,int n){
    if(arr[n-2]<arr[n-1]){
        return true;
    }    
    return false;
}
  int main(){
    vector<int>arr={4,5,6};
    cout<<isorted(arr,3);
    return 0;
}
