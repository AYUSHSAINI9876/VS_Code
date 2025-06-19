#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
  string str=" ayush is an iitian.";
  int count=0;
  for(int i=0;i<str.size();i++){
        if(str[i]==' '){
            str[i+1]-=32;
        }
  }
  cout<<str;
  return 0;
}