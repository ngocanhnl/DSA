#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[505][505];
int n, m;

int tinh(int n, int m){
    if(n==m) return 0;
    if(f[n][m]) return f[n][m];
    int res = 1e9;
    for(int i=1; i<=m-1; i++){
        res = min(res,tinh(n,i)+tinh(n,m-i)+1);
    }
    for(int i=1; i<=n-1; i++){
        res = min(res,tinh(i,m)+tinh(n-i,m)+1);
    }
    f[n][m] = res;
    return res;
}
int main(){
    cin >> n >> m;
    cout<<tinh(n,m);
}
