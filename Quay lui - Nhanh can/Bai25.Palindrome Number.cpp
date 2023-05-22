#include<bits/stdc++.h>
using namespace std;

bool check(string s){
    for(int i=0; i<s.size(); i++){
        if(s[i] != s[s.size()-i-1]) return false;
    }
    return true;
}
vector<vector<string>> res;
vector<string> v;
void ql(int start, string s){
    if(start >= s.size()) res.push_back(v);
    for(int end = start;end<s.size(); end++){
        if(check(s.substr(start,end-start+1))){
            v.push_back(s.substr(start,end-start+1));
            ql(end+1,s);
            v.pop_back();
        }
    }
}


int main(){
    string s; cin >> s;
    ql(0,s);
    for(auto it:res){
        for(string x:it){
            cout<<x<<' ';
        }
        cout<<endl;
    }
}
