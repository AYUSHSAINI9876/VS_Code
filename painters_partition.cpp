#include<iostream>
#include<vector>
using namespace std;

bool is_possible (vector<int>&arr,int n,int m,int maxallowedtime){
    int painters=1,time=0;

    for(int i=0;i<n;i++){
if(time+arr[i]<=maxallowedtime){
    time+=arr[i];
}else{
    painters++;
    time=arr[i];
}
    }
    return painters<=m;
}

int mintime(vector<int>arr,int n,int m){
    int sum=0,max_val = 0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        max_val=max(max_val,arr[i]);
    }
    int st=max_val,end=sum,ans=-1; 
    while(st<=end){
        int mid=(st+end)/2;

        if(is_possible(arr,n,m,mid)){
            ans=mid;
            end=mid-1;
        }else{
            st=mid+1;
        }
    
}
return ans;
}
int main(){
    vector<int>arr={40,30,10,20};
    int n=4,m=2;

    cout<<mintime(arr,n,m);
}