#include<bits/stdc++.h>
using namespace std;
    
int main(){
    int n; cin >> n;
    long long a[n], f[n];
    for(int i=0; i<n; i++){
        cin >> a[i];
    }
    f[0] = a[0];
    for(int i=1; i<n; i++){
        f[i] = f[i-1] + a[i];
    }
    for(long long x:f) cout<<x<<' ';
}
