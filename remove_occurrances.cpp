#include<iostream>
#include<string>
using namespace std;

bool occurrance(string s,string part){ 
    while(s.length()>0 && s.find(part)<s.length()){
        s.erase(s.find(part),part.length());
    }
}
    int main(){
     string str="daabcbaabcbc";
      string part="abc";
     cout<<occurrance(str,part);
    return 0;
}