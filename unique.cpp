#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
  string str1="nandi",str2="sudha";
  int count=0;
  for(int i=0;i<str1.size();i++){
    for(int j=0;j<str2.size();j++){
        if(str1[i]==str2[j]){
            count++;
        }
    }
  }
  cout<<str1.size()+str2.size()-count;
  return 0;
}
