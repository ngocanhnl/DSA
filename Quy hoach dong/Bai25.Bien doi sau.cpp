#include<bits/stdc++.h>
using namespace std;
int f[105][105];
int main(){
    string s1, s2;
    cin >> s1 >> s2;
    int n = s1.size();
    int m = s2.size();
    s1 = "0" + s1;
    s2 = "0" + s2;
    for(int i=1; i<=n; i++) f[i][0] = i;
    for(int i=1; i<=m; i++) f[0][i] = i;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(s1[i] != s2[j]){
                f[i][j] = min({f[i-1][j],f[i][j-1],f[i-1][j-1]})+1;
            }
            else f[i][j] = f[i-1][j-1];
        }
    }
    cout<<f[n][m];
}
