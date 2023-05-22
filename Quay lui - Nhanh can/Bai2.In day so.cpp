#include<bits/stdc++.h>
using namespace std;
int a[100][100];
int n;
string s;
bool ok = false;

void Try(int i, int j, string s){
    if(i==(n-1) && j==(n-1)){
        cout<<s<<endl;
        ok = true;
        return;
    }
    if(a[i+1][j]==1 && i+1<n){
        Try(i+1,j,s+"D");
    }
    if(a[i][j+1]==1 && j+1<n){
        Try(i,j+1,s+"R");
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
