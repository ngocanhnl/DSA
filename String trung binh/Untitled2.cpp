#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
     return a.size() < b.size();
    
}
bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}
int main(){
    string s;
    set<string> se;
    vector<string> v;
    while(cin >> s){
        if(se.count(s)==0 && check(s))
            v.push_back(s);    
        se.insert(s);
    }
    stable_sort(v.begin(),v.end(),cmp);
    for(auto it:v) cout<<it<<' ';
}
