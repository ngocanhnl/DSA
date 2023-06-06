#include<bits/stdc++.h>
using namespace std;
int g[1005][1005];
int main(){
    int n, m; cin >> n >> m;
    int tmp = m;
    while(tmp--){
        int s1,s2;
        cin >> s1 >> s2;
        g[s1][s2]=1;
        g[s2][s1]=1;
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cout<<g[i][j]<<' ';
        }
        cout<<endl;
    }
}
