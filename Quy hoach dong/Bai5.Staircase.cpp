#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[1000000];
int main(){
    int n, k; cin >> n >> k;
    f[0]=1;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=k; j++){
            if(i>=j){
                f[i] += f[i-j];
                f[i] %= mod;
            }
        }
    }
    cout<<f[n];
}
