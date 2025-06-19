#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int untreated = 0, officers = 0;
    for (int i=0;i<n;i++) {
        int event;
        cin >> event;
        if(event == -1){
            if(officers>0){
                officers--;  // assign officer to crime
            }
            else{
                untreated++;  // no officer available
            }
        } else {
            officers += event;  // recruit officers
        }
    }
    cout << untreated << endl;
    return 0;
}