#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n, m;
int dem = 0;
int dx[]={1,0};
int dy[]={0,1};
void Try(int i, int j){
    if(i==n-1 && j == m-1) dem++;
    for(int k =0; k<2; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];    
        if(i1>=0 && j1 >= 0 && i1<n && j1 < m){
            Try(i1,j1);
        }        
    }

}


int main(){
    cin >> n >> m;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> a[i][j];
        }
    }
    Try(0,0);
    cout<<dem;
}
