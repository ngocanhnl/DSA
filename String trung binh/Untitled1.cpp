#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if(a.size() != b.size()) return a.size() < b.size();
    return a<b;
}
int main(){
    string s;
    multiset<string> se;
    vector<string> v;
    while(cin >> s){
        v.push_back(s);    
        se.insert(s);
    }
    for(auto it:se){
        cout<<it<<' ';
    }
    cout<<endl;
    sort(v.begin(),v.end(),cmp);
    for(auto it:v) cout<<it<<' ';
}
