#include <bits/stdc++.h>
using namespace std;

void rotate(vector<int>& nums, int k) {
    int n=nums.size();
    k=k%n; // Handle cases where k is greater than n
    reverse(nums.begin(),nums.end());
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
}

int main()
{
  int k;
  cin>>k;
  vector<int> arr={4,5,3,2,1};
  int n=arr.size();
  rotate(arr,k);
  for (int num : arr) {
    cout << num << " ";
}
cout << endl;
  return 0;
}