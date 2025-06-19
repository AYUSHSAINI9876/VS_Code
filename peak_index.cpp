#include<iostream>
#include<vector>
using namespace std;

int PEAKINDEXsearch(vector<int>arr,int tar){
    int st=0,end=arr.size()-1;

    while(st<=end){
        int mid=(st+end)/2;

        if(arr[mid]-1<arr[mid] && arr[mid]>arr[mid+1]){
            return mid;
        }else if(arr[mid-1]<arr[mid]){
            st=mid+1;
        }else{
            end=mid-1;
        }
    }
    return -1;
}
int main(){
vector<int>arr={-1,0,3,4,5,9,12};
int tar=12;
cout<<PEAKINDEXsearch(arr,tar);
return 0;
}
