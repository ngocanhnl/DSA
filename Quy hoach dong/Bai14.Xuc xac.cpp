#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int main(){
    int n; cin >> n;
    int f[n+1]={0};
    f[0]=1;
    for(int i=1;i<=n; i++){
        for(int j=1; j<=min(i,6); j++){
            f[i] += f[i-j];
            f[i] %= mod; 
        }
    }
    cout<<f[n];
}
