#include<bits/stdc++.h>
using namespace std;
int a[101][101];
long long b[101][101];
int n,m;
int dx[]={-2,-2,-1,1,-1,1,2,2};
int dy[]={-1,1,-2,-2,2,2,-1,1};
void loang(int i, int j){
    a[i][j] = 0;
    for(int k=0; k<8; k++){
        int j1 = j + dy[k];
        int i1 = i + dx[k];
        if(j1 >=0 && j1 < n && i1>=0 && i1 <n && a[i1][j1]==1){
            loang(i1,j1);
        }
    }
}
int main(){
    cin >> n;
    int s,t,u,v;
    cin >> s >> t >> u >> v;
    s--; t--; v--; u--;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    
    loang(s,t);
    if(a[u][v]==1) cout<<"NO";
    else cout<<"YES";
    
}
