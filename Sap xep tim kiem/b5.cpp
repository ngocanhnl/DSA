#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(int a,int b){
    if(mp[a] !=mp[b]) return mp[a]>mp[b];
    return a<b;
}
int main(){
    int n; cin >> n;
    vector<int> v;
    while(n--){
        int t; cin >> t;
        v.push_back(t);
        mp[t]++;
    }
    sort(v.begin(),v.end(), cmp);
    
    cout<<*(v.begin()) <<' '<<mp[*(v.begin())];
}
