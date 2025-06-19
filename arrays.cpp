#include<iostream>
using namespace std;

    // int marks[5]={44,56,67,32,69};
    // int marks[5];
    // for(int i=0;i<5;i++){
    //     cin>>marks[i];
    // }
    // for(int i=0;i<=4;i++){
    //     cout<<marks[i]<<endl;
    // }

    //linear search

// int linearsearch(int arr[],int size,int target){
//     for(int i=0;i<size;i++){
//         if(arr[i]==target){
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//    int arr[]={1,2,3,4,5,6,7,8};
//    int size=8,target=4;
//    cout<<linearsearch(arr,size,target)<<endl;

// int reversearray(int arr[],int size){
//     int start=0,end=size-1;
//     while(start<end){
//         swap(arr[start],arr[end]);
//         start++;
//         end--;
// }
//     }

int main(){
   int arr[]={1,2,3,4,5,6,7,8};
   int size=8;
//    reversearray(arr,size);
   for(int i=0;i<size-1;i+=2){
    swap(arr[i],arr[i+1]);
   }
   for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
   cout<<endl;
           return 0;
}