#include<bits/stdc++.h>
using namespace std;
int f[102][102];
int main(){
    int n;
    cin >> n;
    int a[n+1][n+1];
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }

    for(int j=1; j<=n; j++){
        for(int i=1; i<=n; i++){
            f[i][j] = max({f[i-1][j-1],f[i][j-1],f[i+1][j-1]}) + a[i][j];
        }
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        ans = max(ans,f[i][n]);
    }
    cout<<ans;    
}
