#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
string s;
bool ok = false;
int dx[]={1,0,0,-1};
int dy[]={0,-1,1,0};
string t="DLRU";
void Try(int i, int j, string s){
    a[i][j]=0;
    if(i==n-1 && j==n-1){
        cout<<s<<endl;
        ok = true;
    }
    for(int k=0; k<4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if(i1 >=0 && i1 < n && j1>=0 && j1 < n && a[i1][j1]==1 ){
            Try(i1,j1,s + t[k]);
            a[i1][j1]=1;
        }
    }

    
}
int main(){
    cin >> n;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    Try(0,0,"");
    if(ok==false) cout<<-1;
}
