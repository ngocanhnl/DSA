#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;

ll solve(ll n, ll k){
    ll x = pow(2,n-1);
    if(k==x){
        return n;
    }
    if(k>x){
        return solve(n-1,k-x);
    }
    else return solve(n-1,k);
    
}

int main(){
    ll a, b; cin >> a >>  b;
    cout<<solve(a,b);
}
