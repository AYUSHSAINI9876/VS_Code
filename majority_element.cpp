#include<iostream>
#include<vector>
using namespace std;
int main(){

int nums[5]={1,2,3,4,5};

class solution{
    public:
    int majority_element(vector <int> & nums){
        int n=nums.size();
            for(int val: nums){
            int freq=0;
            for(int el:nums){
                 if(el==nums[5]){
                    freq++;
                 }
            }
          if(freq>n/2){
            return val;
          }
        }
    }
};
return 0;
}