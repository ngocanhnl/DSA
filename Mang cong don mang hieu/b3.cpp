#include<bits/stdc++.h>
using namespace std;
int n, m;
int f[1001][1001];
int main(){
     cin >> n >> m;
    int a[n][m];
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m;j++){
            f[i][j] = f[i-1][j] + f[i][j-1] + a[i-1][j-1] - f[i-1][j-1];
        }
    }
    int q; cin >> q;
    while(q--){
        int x1, x2, y1 ,y2;
        cin >> x1 >> x2 >> y1 >> y2;
        cout<<f[x2][y2] - f[x1-1][y2] - f[x2][y1-1] + f[x1-1][y1-1]<<endl;
    }
}
