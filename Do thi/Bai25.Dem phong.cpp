#include<bits/stdc++.h>
using namespace std;
bool visited[1001];
vector<int> v[1001];
int a[1001][1001];
int n, m;
void nhap(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            char x; cin >> x;
            if(x=='#'){
                a[i][j]=0;
            }
            else a[i][j]=1;
            
        }
    }
}

bool tham[1001][1001];
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
void loang(int i, int j){
    tham[i][j] = true;
    for(int k=0; k<4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1>=1 && i1 <= n && j1>=1 && j1<=m && a[i1][j1]==1 && !tham[i1][j1]){
            loang(i1,j1);
        }
    }
}


int main(){
    nhap();
    int dem = 0;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(!tham[i][j] && a[i][j]==1){
            
                dem++;
                loang(i,j);
            }
        }
    }
    cout<<dem;
}
