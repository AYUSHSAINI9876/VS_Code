#include<iostream>
#include<vector>
using namespace std;
int main(){
vector<char>vec={'a','b','c','d','e'};
cout<<"size="<<vec.size()<<endl;
// vec.push_back('f');
// vec.push_back('g');
// vec.push_back('h');
// vec.push_back('i');
// cout<<"size after push_back="<<vec.size()<<endl;
// cout<<"capacity after push_back="<<vec.capacity()<<endl;
// vec.pop_back();
// cout<<"size after pop_back="<<vec.size()<<endl;


// vec.erase(vec.begin()+2);
// vec.insert(vec.begin()+2,'z');
// vec.clear();
// vec.empty();



for (char val:vec){
    cout<<val<<endl;
}
// cout<<vec.front()<<endl;//gives the very first value
// cout<<vec.back()<<endl;//gives the very last value
// cout<<vec.at(4)<<endl;//gives the value at a particular index

return 0;
}