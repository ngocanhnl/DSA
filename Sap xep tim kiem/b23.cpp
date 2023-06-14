#include<bits/stdc++.h>
using namespace std;
map<int,int> mp;
bool cmp(pair<int,int> a, pair<int,int> b){
    if(a.second != b.second) return a.second > b.second;
    return a.first < b.first;
}
bool cmp2(pair<int,int> a, pair<int,int> b){
    return a.second > b.second;
}
int main(){
    int n; cin >> n;
    vector<pair<int,int>> v;
    int a[n];
    for(int &x:a){
        cin >> x;
        mp[x]++;
    }
    for(auto it:mp){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp);
    for(auto it: v){
        for(int i=0; i<it.second; i++){
            cout<<it.first<<' ';
        }
    }
    cout<<endl;
    vector<pair<int,int>> v2;
    for(int i=0; i<n; i++){
        if(mp.count(a[i])){
            v2.push_back({a[i],mp[a[i]]});
            mp.erase(a[i]);
        }
    }
    stable_sort(v2.begin(), v2.end(), cmp2);
    for(auto it: v2){
        for(int i=0; i<it.second; i++){
            cout<<it.first<<' ';
        }
    }
}
