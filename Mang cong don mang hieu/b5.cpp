#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for(int &x:a) cin >> x;
    long long d[n];
    for(int i=0; i<n; i++){
        if(i==0){
            d[0] = a[0];
        }
        else{
            d[i] = a[i]-a[i-1];
        }
    }     
    while(q--){
        int l, r, k; cin >> l >> r >> k;
        d[l] += k;
        d[r+1] -= k;
    }
    long long f[n];
    f[0] = d[0];
    for(int i=1; i<n; i++){
        f[i] = f[i-1] + d[i];
    }
    for(long long x:f) cout<<x<<' ';
}
