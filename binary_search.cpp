#include<iostream>
#include<vector>
using namespace std;

// int binarysearch(vector<int>arr,int tar){
//     int st=0,end=arr.size()-1;

//     while(st<=end){
//         int mid=(st+end)/2;

//         if(tar>arr[mid]){
//             st=mid+1;
//         }else if(tar<arr[mid]){
//             end=mid-1;
//         }else{
//             return mid;
//         }
//     }
//     return -1;
// }
// int main(){
// vector<int>arr={-1,0,3,4,5,9,12};
// int tar=12;
// cout<<binarysearch(arr,tar);
// return 0;
// }

int binarysearch(vector<int>arr,int tar,int st,int end){
    
    while(st<=end){
        int mid=(st+(end-st)/2);

        if(tar>arr[mid]){
            return binarysearch(arr,tar,mid+1,end);
        }else if(tar<arr[mid]){
            return binarysearch(arr,tar,st,mid+1);
        }else{
            return mid;
        }
    }
    return -1;
}
int main(){
vector<int>arr={-1,0,3,4,5,9,12};
int tar=0;
cout<<binarysearch(arr,tar,0,arr.size()-1);
return 0;
}