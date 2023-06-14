#include<bits/stdc++.h>
using namespace std;
using  ll = long long;

bool check(ll a[], int n, ll time, int k){
    ll sum = 0;
    for(int i=0; i<n; i++){
        sum += time/a[i];
        if(sum >= k) return true;
    }
    return sum >= k;
}
int main(){
    int n, k;
    cin >> n >> k;
    ll a[n];
    for(ll &x:a) cin >> x;
    ll l=0, r=1ll*(*min_element(a,a+n))*k;
    ll ans;
    while(l <= r){
        ll m = (l+r)/2;
        if(check(a,n,m,k)){
            ans = m;
            r = m-1;    
        }
        else l = m+1;
    }
    cout<<ans;
}
