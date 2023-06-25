#include<bits/stdc++.h>
using namespace std;
vector<string> v;

void xuli(){
    queue<string> q;
    q.push("1");
    while(!q.empty()){
        string u = q.front(); q.pop();
        if(u.size() >= 21) break;
        v.push_back(u);
        q.push(u+"0");
        q.push(u + "1");
    }
}
int check(string s, int n){
    int mod = 0;
    int x = s.size();
    for(int i=0; i<x; i++){
        mod = (mod*10) + (s[i]-'0') %  n;
        mod %=n; 
    }
    return mod == 0;
}
void solve(){
    int n; cin >> n;
    for(auto it:v){
        if(check(it,n)){
            cout<<it<<endl;
            break;    
        }
    }
}

int main(){
    int qe; cin >> qe;
    xuli();
    while(qe--){
        solve();
    }

}
