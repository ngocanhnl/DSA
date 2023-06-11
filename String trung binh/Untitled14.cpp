#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    set<char> se;
    map<char,long long> mp;
    for(char x:s){
        mp[x]++;
        se.insert(x);
    }
    long long dem=s.size();
    for(auto it:se){
        dem += (mp[it]*(mp[it]-1))/2;
    }
    cout<<dem;
}
