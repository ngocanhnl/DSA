#include<bits/stdc++.h>
using namespace std;

int f[1005][1005];
int main(){
    string s, t; cin >> s >> t;
    int n = s.size();
    int m = t.size();
    s = "0" + s;
    t = "0" + t;
    
    for(int i=0; i<=n; i++){
        for(int j=0;j<=m; j++){
            if(i==0||j==0){
                f[i][j] = 0;
            }
            else{
                if(s[i]==t[j]){
                    f[i][j] = f[i-1][j-1]+1;
                }
                else f[i][j] = max({f[i-1][j-1],f[i-1][j],f[i][j-1]});
            }
        }
    }
    cout<<f[n][m];
}
