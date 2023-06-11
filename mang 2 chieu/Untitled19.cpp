#include<bits/stdc++.h>
using namespace std;
long long a[101][101];
long long b[101][101];
int n,m;

int main(){
    cin >> n >> m;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            b[i][j] = max(b[i-1][j], b[i][j-1]) + a[i][j];     
        }
    }
    cout<<b[n][m];
    
}
