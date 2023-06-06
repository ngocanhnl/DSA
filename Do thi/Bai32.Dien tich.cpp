#include<bits/stdc++.h>
using namespace std;

int n, m;
int a[1005][1005];

void nhap(){
    cin >> n >> m;
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=m; j++){
    		char x;
    		cin >> x;
    		if(x=='#'){
    			a[i][j]=0;
			}
			else a[i][j]=1;
		}
	}
    
}
int dem=0;
int dx[]={0,-1,1,0};
int dy[]={-1,0,0,1};
void DFS(int i,int j){
	a[i][j]=0;
	dem++;
	for(int k=0; k<4; k++){
		int i1=i+dx[k];
		int j1 = j+ dy[k];
		if(i1 >=1 && i1<=n && j1>=1 && j1<=m && a[i1][j1]){
			DFS(i1,j1);
		}
	}
	
}
int main(){
    nhap();
    for(int i=1; i<=n; i++){
    	for(int j=1; j<=m; j++){
    		if(a[i][j]){
    		 	DFS(i,j);
    		 	cout<<dem<<' ';
    		 	dem=0;
    		}
		}
	}
   
}
