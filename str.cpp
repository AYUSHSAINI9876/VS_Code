#include <bits/stdc++.h>
using namespace std;

int main()
{
// //string s;
// for(int i=0;i<52;i++){
//  if(i%2==0){
//   cout<< char(i/2+65)<<endl;
//  }
//  else{
// cout<<char(i/2+97)<<endl;
//  }
//  }
// //cout<<s<<endl;

// int n,m;
// cin>>n;
// cin>>m;
// if(n<=2 || m<2){
//     cout<<"can't form box...";
// }
// for(int i=0;i<n;i++){
//     for(int j=0;j<m;j++){
//         if(i==0 || i==n-1 || j==0 || j==m-1){
//             cout<<"*";
//         }
//         else{
//             cout<<" ";
//         }
//     }
//     cout<<endl;
// }
stack<int>s;
s.push(1);
s.push(2);
s.push(3);
s.push(4);
s.push(5);
while(!s.empty()){
cout<< s.top()<<" " ;
s.pop();
}

cout<<endl;
  return 0;
}