#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, q; cin >> n >> q;
    int a[n];
    for(int &x:a) cin >> x;
    int d[n+5] = {0};
    while(q--){
        int l, r;
        cin >> l >> r;
        l--; r--;
        d[l] += 1;
        d[r+1] -= 1;
    }
    int f[n];
    f[0] = d[0];
    for(int i=1; i<n; i++){
        f[i] = f[i-1] + d[i];
    }
    sort(a,a+n,greater<int>());
    sort(f,f+n,greater<int>());
    long long sum = 0;
    for(int i=0; i<n; i++){
        sum += 1ll *a[i]*f[i];
    }
    cout<<sum;
    
}
