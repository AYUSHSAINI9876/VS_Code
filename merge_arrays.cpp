#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& arr1,int m,vector<int>& arr2,int n){
    int idx=m+n-1,i=m-1,j=n-1;
    
    while(i>=0&&j>=0){
        if(arr1[i]>=arr2[j]){
            arr1[idx--]=arr2[i--];
        }else{
            arr1[idx--]=arr2[j--];
        }
    }
    while(j>=0){
        arr1[idx--]=arr2[j--];
    }
}
void printarray(int arr1[],int m,int arr2[],int n){
    for(int i=0;i<n;i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n=3;
    int m=3;
    int arr1[]={1,2,3};
    int arr2[]={4,5,6};
    
    printarray(arr1,m,arr2,n);
    return 0;
}