#include<iostream>
#include<string>
using namespace std;

bool isfreqsame(int freq1[],int freq2[]){
    for(int i=0;i<26;i++){
        if(freq1[i]!=freq2[i]){
            return false;
        }
    }
    return true;
}
bool checkinclusion(string s1,string s2){ 
    int freq[26]={0};
    for(int i=0;i<s1.length();i++){
        freq[s1[i]-'a']++;
    }
    int windsize=s1.length();
    for(int i=0;i<s2.length();i++){
        int windidx=0,idx=1;
        int windfreq[26]={0};
        while(windidx<windsize && idx<s2.length()){
            windfreq[s2[idx]-'a']++;
            windidx++;idx++;
        }
        if(isfreqsame(freq,windfreq)){
            return true;
        }
    }return false;
}
    int main(){
     string str1="ab";
      string str2="eidbaooo";
     cout<<checkinclusion(str1,str2);
    return 0;
}