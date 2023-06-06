#include<bits/stdc++.h>
using namespace std;

int main(){
    string x, y, z;
    cin >> x >> y >> z;
    int n = x.size(), m = y.size(), t = z.size();
    int used[106]={0};
    x = "0" + x;
    y = "0" + y;
    z = "0" + z;
    int f[n+1][m+1][t+1];
    for(int i=0; i<=n; i++){
        for(int j=0;j<=m; j++){
            for(int k=0; k<=t; k++){
                if(i==0||j==0||k==0){
                    f[i][j][k] = 0;
                }
                else{
                    if(x[i]==y[j]&&x[i]==z[k]){
                        f[i][j][k] = f[i-1][j-1][k-1]+1;
                    }
                    else{
                        f[i][j][k] = max({f[i-1][j][k],f[i][j-1][k],f[i][j][k-1]});
                    }
                }
            }
        }
    }
    cout<<f[n][m][t];
}
