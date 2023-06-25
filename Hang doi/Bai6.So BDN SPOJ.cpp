#include<bits/stdc++.h>
using namespace std;
vector<long long> v;

void xuli(){
    queue<long long> q;
    q.push(1);
    while(1){
        long long u = q.front(); q.pop();
        if(u<=1e18) {
            v.push_back(u);
            q.push(u*10);
            q.push(u*10+1);
        }
        else break;
    }
}
void solve(){
    long long n; cin >> n;
    int dem = 0;
    for(auto it:v){
        if(it<n) dem++;
        else break;
    }
    cout<<dem<<endl;
}
int main(){
    int qe; cin >> qe;
    xuli();
    while(qe--){
        solve();
    }

}
