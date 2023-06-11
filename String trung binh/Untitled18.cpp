#include<bits/stdc++.h>
using namespace std;
bool cmp(string a, string b){
    if(a.size() != b.size()){
        return a.size()<b.size();
    }
    return a<b;
}
int main(){
    string s; cin >> s;
    for(char &x:s){
        if(isdigit(x)==false){
            x = ' ';
        }
    }
    stringstream ss(s);
    string t;
    vector<string> v;
    while(ss >> t){
        while(t[0]=='0'&&t.size()>1){
            t.erase(0,1);
        }
    v.push_back(t);
    }
    sort(v.begin(),v.end(), cmp);
    cout<<*(v.end()-1);
}
