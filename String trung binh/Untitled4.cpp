#include<bits/stdc++.h>
using namespace std;
map<string,int> mp;
bool cmp(string a, string b){
    if(mp[a] != mp[b]) return mp[a] < mp[b];
    return a<b;
}
bool cmp1(string a, string b){
    if(mp[a] != mp[b]) return mp[a] < mp[b];
    return a>b;
}
int main(){
    string s;
    set<string> se;
    vector<string> v;
    while(cin >> s){
        if(se.count(s)==0)
            v.push_back(s);    
        se.insert(s);
        mp[s]++;
    }
    sort(v.begin(),v.end(),cmp);
    cout<<*(v.rbegin())<<' '<<mp[*(v.rbegin())]<<endl;
    sort(v.begin(),v.end(),cmp1);
    cout<<*(v.begin())<<' '<<mp[*(v.begin())]<<endl;
}
