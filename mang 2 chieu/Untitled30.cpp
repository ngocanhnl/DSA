#include<bits/stdc++.h>
using namespace std;
int f[102][102];
int n, s, t;
int a[106][109];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int dem = 0;
void loang(int i, int j){
    a[i][j] = 1;
    dem++;
    for(int k=0; k<4; k++){
        int j1 = j + dy[k];
        int i1 = i + dx[k];
        if(j1>=0 && j1 <  n && i1>=0 && i1 < n && a[i1][j1]==0){
            loang(i1,j1);
            
        }
    }
}
int main(){
    cin >> n >> s >> t;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    
    s--; t--;
    loang(s,t);
    
    cout<<dem;
}
