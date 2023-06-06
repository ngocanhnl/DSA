#include<bits/stdc++.h>
using namespace std;
int a[1008][1008]; 
int f[1008][1008], mod = 1e9+7;
int main(){
    int n,m; cin >> n >> m ;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    } 
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i==1 || j==1){
                f[i][j] = a[i][j];
            }
            else{
                if(a[i][j]){
                        f[i][j] = min({f[i-1][j],f[i-1][j-1],f[i][j-1]}) + 1;
                }
                else f[i][j] = 0;
            }
        }
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            ans = max(ans,f[i][j]);
        }
    } 
    cout<<ans;
    
}
