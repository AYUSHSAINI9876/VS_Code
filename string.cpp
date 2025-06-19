#include <bits/stdc++.h>
#include <string.h>
using namespace std;

int main()
{
  string str1="egg",str2="add";
  if (str1.size() != str2.size()) {
    cout << "not an isomorphic string" << endl;
    return 0;
}

  for(int i=0;i<str1.size();i++){
    for(int j=0;j<str2.size();j++){
        if ((str1[i] == str1[j]) != (str2[i] == str2[j])) {
            cout << "not an isomorphic string" << endl;
            return 0;
        }
        else{
            cout<<" isomorphic string"<<endl;
        }
    }
  }
  return 0;
}