#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n; 
    vector<string>word(n);
    for(int i = 0; i < n; i++) {
        cin >> word[i];
    }
    int sum=0;
    for(int i = 0; i < n; i++) {
        if(word[i]=="Icosahedron"){
            sum+=20;   
        }
        if(word[i]=="Tetrahedron"){
            sum+=4;   
        }
        if(word[i]=="Cube"){
            sum+=6;   
        }
        if(word[i]=="Dodecahedron"){
            sum+=12;   
        }
        if(word[i]=="Octahedron"){
            sum+=8;   
        }
    }
    cout << sum << endl;
    return 0;
}