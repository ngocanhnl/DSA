#include<bits/stdc++.h>
using namespace std;
int a[101][101];
long long b[101][101];
int n,m;

int main(){
    cin >> n;
    map<int,int> mp;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin >> a[i][j];
        }
    }
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(mp[a[i][j]] == i){
                mp[a[i][j]]++;
            }
        }
    }
    bool k = false;
    for(auto it:mp){
        if(it.second == n){
            k = true;
            cout<<it.first<<' ';
        }
    }
    if(k==false) cout<<"NOT FOUND";
    
}
