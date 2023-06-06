#include<bits/stdc++.h>
using namespace std;
long long mod = 1e9+7;
using ll = long long;

long long binPow(ll n, ll k){
    if(k==0){
        return 1;
    }
    long long x = binPow(n, k/2);
    if(k%2==1){
        return ((x%mod) * (x%mod)%mod) * (n %mod) %mod;
    }
    else return (x%mod) * (x%mod)%mod;
    
    
}

int main(){
    ll a, b; cin >> b;
    cout<<binPow(2,b-1);
}
