#include<bits/stdc++.h>
using namespace std;
int f[102][102];int n;int a[106][109];
int dx[] = {-1,-1,-1,0,0,1,1,1};
int dy[] = {-1,0,1,-1,1,-1,0,1};

int loang(int i, int j){
    int sum = 0;

    for(int k=0; k<8; k++){
        int j1 = j + dy[k];
        int i1 = i + dx[k];
        if(j1>=1&& j1<=n && i1>=1 && i1 <=n){
            sum += a[i1][j1];
            
        }
    }
    sum += a[i][j];
    return sum;
}
int main(){
    
    cin >> n;
    
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            cin >> a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            f[i][j] = loang(i,j);
        }
    }
    int ans = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=n; j++){
            ans = max(ans,f[i][j]);
        }
    }
    cout<<ans;
}
