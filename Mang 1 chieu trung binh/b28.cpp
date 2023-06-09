#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int mod = 1000000007;
    long long a[n];
    for(long long &x:a) cin >> x;
    sort(a,a+n);
    long long tong = 0;
    for(long long i=0; i<n; i++){
        tong += (a[i]%mod*i%mod)%mod;
        tong%=mod;
    }
    cout<<tong;
}
