#include<iostream>
#include<vector>
#include <climits> // For INT_MIN
using namespace std;
int main(){
int n=5;
int arr[5]={1,2,3,4,5};

int maxSum = 0;

// for(int st=0;st<n;st++){
//     int currSum=0;
//     for(int end=st;end<n;end++){
//         currSum+=arr[end];
//         maxSum=max(currSum,maxSum);
//     }
// }
// cout<<"max subarray sum = "<<maxSum<<endl;
// return 0;
// }

// kadane's algorithm

class solution{
    public:
    int maxsubarray(vector <int> & nums){
        int currsum=0;
        int maxsum=INT_MIN;
        
        for(int val: nums){
            currsum+=val;
            maxsum=max(currsum,maxsum);
            if(currsum<0){
                currsum=0;
            } 
        }
          return maxsum;
    }
};
return 0;
}