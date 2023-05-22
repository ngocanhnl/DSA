#include<bits/stdc++.h>
using namespace std;
int dx[]={-1,0,0,1};
int dy[]={0,-1,1,0};
int used[100][100];
int n,m;
char a[100][100];
string s;
string t;
int ok =0;
void ql(int i,int j){
    if(ok) return;
    if(t==s){
        ok=1;
        return;
    }
    for(int k=0; k<4; k++){
        int i1 = i + dx[k];
        int j1 = j+ dy[k];
        if(i1>=0 && i1 <n && j1>=0 && j1<m && used[i1][j1]==0){
            t += a[i1][j1];
            used[i1][j1] = 1;
            if(t == s){
                ok = 1;
            }
            else if(s.find(t) != string::npos){
                ql(i1,j1);
            }
            t.pop_back();
            used[i1][j1] = 0;
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
    cin >> s;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(a[i][j]==s[0]){
                memset(used,0,sizeof(used));
                t ="";
                t += a[i][j];
                used[i][j]=1;
                ql(i,j);
                if(ok){
                    cout<<"YES";
                    return 0;
                }
            }
        }
    }

    cout<<"NO";
    
}
