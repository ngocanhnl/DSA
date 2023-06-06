#include<bits/stdc++.h>
using namespace std;
int mod = 1e9+7;
int f[1007][1000];
int main(){
    int n, s; cin >> n >> s;
    int w[n+1], v[n+1];
    for(int i=1; i<=n; i++) cin >> w[i];
    for(int i=1; i<=n; i++) cin >> v[i];
    
    for(int i=0; i<=n; i++){
        for(int j=0; j<=s; j++){
            if(i==0||j==0){
                f[i][j]=0;
            }
            else{
                f[i][j] = f[i-1][j];
                if(j>=w[i])
                    f[i][j] = max(f[i][j],f[i-1][j-w[i]]+v[i]);
                }
        }
    }
    cout<<f[n][s];
}
