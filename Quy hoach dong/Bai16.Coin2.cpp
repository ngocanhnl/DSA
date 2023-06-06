#include<bits/stdc++.h>
using namespace std;
int f[1000006];
int main(){
    int n, k; cin >> n >> k;
    int a[n+1];
    for(int i=1; i<=n;i++){
        cin >> a[i];
    }
    int mod = 1e9 + 7;
    f[0] = 1;
    for(int i=1; i<=k; i++){
        for(int j=1; j<=n; j++){
            if(i >= a[j]){
                f[i] += f[i-a[j]];
            }
            f[i] %=mod;
        }
    }
    cout<<f[k];
}
