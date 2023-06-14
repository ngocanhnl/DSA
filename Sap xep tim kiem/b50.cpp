#include<bits/stdc++.h>
using namespace std;
using ll = long long;
bool check(ll n, ll x, ll y, ll time){

    time -= min(x,y);
    return time/x + time/y >= n-1;
}
int main(){
    ll n, x, y;
    cin >> n >> x >> y;
    ll l =0, r=min(x,y)*n;
    ll res=-1;
    while(l <= r){
        ll m = (l+r)/2;
        if(check(n,x,y,m)){
            res = m;
            r = m-1;
        }
        else l = m+1;
    }
    cout<<res;
}
