#include<iostream>
#include<vector>
using namespace std;

bool binsearch(vector<int>arr,int tar,int st,int end){
    if(st<=end){
        int mid=st+(end-st)/2;
        if (arr[mid]==tar){
            return mid;
            }
           else if(arr[mid]<=tar){ return binsearch(arr,tar,mid+1,end);
        }else{
            return binsearch(arr,tar,st,mid-1);
        }
    }    
    return -1;
}

int search(vector<int>&arr,int tar){
    return binsearch(arr,tar,0,arr.size()-1);
}
 int main() {
    vector<int> arr = {2, 4, 6, 8, 10, 12, 14}; // Use vector instead of array
    int target = 4;

    int result = search(arr, target); // Call the wrapper function

    if (result != -1) {
        cout << "Element found at index " << result << endl;
    } else {
        cout << "Element not found" << endl;
    }

    return 0;
}
