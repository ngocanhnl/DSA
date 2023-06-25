#include<bits/stdc++.h>
using namespace std;
vector<string> v;

void xuli(){
    queue<string> q;
    q.push("6");
    q.push("8");
    while(!q.empty()){
        string u = q.front(); q.pop();
        if(u.size() > 18) break;
        v.push_back(u);
        q.push(u+"6");
        q.push(u + "8");
    }
}

void solve(){
    int n; cin >> n;
    int dem = 0;
    vector<string> res;
    for(auto it:v){
        if(it.size() <=n ){
            dem++;
            res.push_back(it);
        }
    }
    cout<<dem<<endl;
    reverse(res.begin(),res.end());
    for(auto x:res) cout<<x<<' ';
    cout<<endl;
}

int main(){
    int qe; cin >> qe;
    xuli();
    while(qe--){
        solve();
    }

}
