#include<iostream>
#include<string>
using namespace std;

bool ispalindrome(string s){ 
    for(int i=0;i<s.size()/2;i++){
    if(s[i]!=s[s.size()-i-1]){
        return false;
    }
    }return true;
}
    int main(){
     string str="madam";
     if(ispalindrome(str)){
        cout<<"it's a valid palindrome...";
     }
     else{
        cout<<"it's not a valid palindrome...";
     }
    return 0;
}